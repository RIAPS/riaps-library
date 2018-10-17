//
// Auto-generated by edu.vanderbilt.riaps.generator.ComponenetGenerator.xtend
//

#ifndef RIAPS_CORE_COMPUTATIONALCOMPONENT_H
#define RIAPS_CORE_COMPUTATIONALCOMPONENT_H

#include <componentmodel/r_componentbase.h>
#include <messages/modbusuart.capnp.h>
#include "messages/LogData.capnp.h"
#include <pybind11/pybind11.h>


// Name of the ports from the model file
constexpr auto PORT_TIMER_CLOCK       = "clock";
constexpr auto PORT_PUB_TX_MODBUSDATA = "tx_modbusData";
constexpr auto PORT_REQ_MODBUSREQPORT = "modbusReqPort";

namespace py = pybind11;

namespace riapsmodbuscreqrepuart {
   namespace components {
      
      class ComputationalComponentBase : public riaps::ComponentBase {
         
         public:
         ComputationalComponentBase(const py::object *parent_actor,
                                    const py::dict actor_spec,
                                    const py::dict type_spec,
                                    const std::string &name,
                                    const std::string &type_name,
                                    const py::dict args,
                                    const std::string &application_name,
                                    const std::string &actor_name);
         
         virtual void OnClock(riaps::ports::PortBase *port)=0;
         
         virtual bool SendTx_modbusData(capnp::MallocMessageBuilder& messageBuilder,
                                        logdata::messages::LogData::Builder& message);
         
         bool SendModbusReqPort(capnp::MallocMessageBuilder&    messageBuilder,
                                modbusuart::messages::CommandFormat::Builder& message);
         
         bool RecvModbusReqPort(modbusuart::messages::ResponseFormat::Reader &message);
         
         virtual ~ComputationalComponentBase() = default;
         protected:
         virtual void DispatchMessage(capnp::FlatArrayMessageReader* capnpreader, riaps::ports::PortBase *port, std::shared_ptr<riaps::MessageParams> params);
         virtual void DispatchInsideMessage(zmsg_t* zmsg, riaps::ports::PortBase* port);
      };
   }
}
#endif //RIAPS_CORE_COMPUTATIONALCOMPONENT_H
