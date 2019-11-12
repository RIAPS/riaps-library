'''
Created on July 31, 2017

@author: Tim Krentz
'''
# riaps:keep_import:begin
from riaps.run.comp import Component
from riaps.run.exc import PortError
import os
# riaps:keep_import:end

class TestUartComponentA(Component):
# riaps:keep_constr:begin
    def __init__(self):
        super().__init__()
        self.pid = os.getpid()
        self.logger.info("TestUartComponent: %s - starting" % str(self.pid))
        self.count = 0
# riaps:keep_constr:end

# riaps:keep_activity:begin
    def on_activity(self):
        msg = self.activity.recv_pyobj()

        try:
            msg = ('write',str.encode(str(self.count)))
            self.uartReqPort.send_pyobj(msg)
            self.count = self.count + 1

            self.logger.info("on_activity()[%s]: requested to write: %s" %
                (str(self.pid),repr(msg)))
        except PortError as e:
            if e.errno in (PortError.EAGAIN,PortError.EPROTO):
                self.logger.info("on_activity()[%s]: resetting socket" % str(self.pid))
                self.uartReqPort.reset()
            else:
                raise

# riaps:keep_activity:end

# riaps:keep_uartReqPort:begin
    def on_uartReqPort(self):
        msg = self.uartReqPort.recv_pyobj()
        self.logger.info("on_uartReqPort()[%s]: got reply : %s " %
                        (str(self.pid),repr(msg)))
# riaps:keep_uartReqPort:end

# riaps:keep_impl:begin

# riaps:keep_impl:end
