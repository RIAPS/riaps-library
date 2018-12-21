//
// Auto-generated by edu.vanderbilt.riaps.generator.ComponenetGenerator.xtend
//
#ifndef RIAPS_FW_MODBUSUART_H
#define RIAPS_FW_MODBUSUART_H

#include "ModbusUARTBase.h"
//#include "time_macros.h"
#include <memory>
#include <modbus/modbus.h>
#include <modbus/modbus-rtu.h>
#include <tuple>


namespace globals {
  namespace components {

    class ModbusUART : public ModbusUARTBase {

	typedef struct serial_port_config {
		std::string portname;
		int baudrate;
		int bytesize;
		char parity;
		int stopbits;
	} serial_port_config_t;

    public:
      ModbusUART(_component_conf &config, riaps::Actor &actor);

      virtual void OnModbusRepPort(const CommandFormat::Reader &message,
                                   riaps::ports::PortBase *port);

      virtual void OnClock(riaps::ports::PortBase *port);

      void OnGroupMessage(const riaps::groups::GroupId &groupId,
                          capnp::FlatArrayMessageReader &capnpreader,
                          riaps::ports::PortBase *port);

      virtual ~ModbusUART();

    private:
      pid_t PID;
      bool debugMode;
      struct serial_port_config portConfig;
      int portSlaveAddress;
      int portSerialMode;
      modbus_t* ctx;
      int nb_holdingRegs;
      int nb_inputRegs;
      int nb_coilBits;
      int nb_discreteBits;
      std::unique_ptr<uint16_t[]> holding_regs;
      std::unique_ptr<uint16_t[]> input_regs;
      std::unique_ptr<uint8_t[]> coil_bits;
      std::unique_ptr<uint8_t[]> discrete_bits;
      bool portOpen;

      // time testing
      //struct timespec resolution = {0,0};
      //struct timespec preobservations = {0,0};
      //struct timespec postobservations = {0,0};
      //struct timespec postpostobservations = {0,0};
      //system_timespec result;

      int sendModbusCommand(const CommandFormat::Reader &message);
      bool startRTUModbus(int serialMode);
      void closeModbus(void);
      bool isModbusReady(void);
      int readCoilBits(int addr, int nb);
      int readInputBits(int addr, int nb);
      int readHoldingRegs(int addr, int nb);
      int readInputRegs(int addr, int nb);
      int writeCoilBit(int addr, int status);
      int writeHoldingReg(int addr, int value);
      int writeCoilBits(int addr, int nb);
      int writeHoldingRegs(int addr, int nb);
      int writeReadHoldingRegs(int write_addr, int write_nb, int read_addr, int read_nb);
    };
  }
}

extern "C" riaps::ComponentBase *create_component(_component_conf &,
                                                  riaps::Actor &actor);
extern "C" void destroy_component(riaps::ComponentBase *);

#endif // RIAPS_FW_MODBUSUART_H