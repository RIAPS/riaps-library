// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: riapsmodbuscreqrepuart.capnp

#ifndef CAPNP_INCLUDED_af97e03d7a1334cf_
#define CAPNP_INCLUDED_af97e03d7a1334cf_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(a8c2f2e001935143);
CAPNP_DECLARE_SCHEMA(aa2185842ad6aeed);
enum class ModbusCommands_aa2185842ad6aeed: uint16_t {
  NO_CMD,
  READ_COIL_BITS,
  READ_INPUT_BITS,
  READ_INPUT_REGS,
  READ_HOLDING_REGS,
  WRITE_COIL_BIT,
  WRITE_HOLDING_REG,
  WRITE_COIL_BITS,
  WRITE_MULTI_HOLDING_REGS,
  WRITE_READ_HOLDING_REGS,
};
CAPNP_DECLARE_ENUM(ModbusCommands, aa2185842ad6aeed);
CAPNP_DECLARE_SCHEMA(d8aa28f02457a77c);
CAPNP_DECLARE_SCHEMA(c35fb053fc20b540);

}  // namespace schemas
}  // namespace capnp

namespace riapsmodbuscreqrepuart {
namespace messages {

struct LogData {
  LogData() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(a8c2f2e001935143, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

typedef ::capnp::schemas::ModbusCommands_aa2185842ad6aeed ModbusCommands;

struct CommandFormat {
  CommandFormat() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(d8aa28f02457a77c, 2, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct ResponseFormat {
  ResponseFormat() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(c35fb053fc20b540, 1, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class LogData::Reader {
public:
  typedef LogData Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasMsg() const;
  inline  ::capnp::Text::Reader getMsg() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class LogData::Builder {
public:
  typedef LogData Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasMsg();
  inline  ::capnp::Text::Builder getMsg();
  inline void setMsg( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initMsg(unsigned int size);
  inline void adoptMsg(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownMsg();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class LogData::Pipeline {
public:
  typedef LogData Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class CommandFormat::Reader {
public:
  typedef CommandFormat Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::riapsmodbuscreqrepuart::messages::ModbusCommands getCommandType() const;

  inline  ::uint16_t getRegisterAddress() const;

  inline  ::uint16_t getNumberOfRegs() const;

  inline bool hasValues() const;
  inline  ::capnp::List< ::uint16_t>::Reader getValues() const;

  inline  ::uint16_t getWreadRegAddress() const;

  inline  ::uint16_t getWreadNumOfRegs() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class CommandFormat::Builder {
public:
  typedef CommandFormat Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::riapsmodbuscreqrepuart::messages::ModbusCommands getCommandType();
  inline void setCommandType( ::riapsmodbuscreqrepuart::messages::ModbusCommands value);

  inline  ::uint16_t getRegisterAddress();
  inline void setRegisterAddress( ::uint16_t value);

  inline  ::uint16_t getNumberOfRegs();
  inline void setNumberOfRegs( ::uint16_t value);

  inline bool hasValues();
  inline  ::capnp::List< ::uint16_t>::Builder getValues();
  inline void setValues( ::capnp::List< ::uint16_t>::Reader value);
  inline void setValues(::kj::ArrayPtr<const  ::uint16_t> value);
  inline  ::capnp::List< ::uint16_t>::Builder initValues(unsigned int size);
  inline void adoptValues(::capnp::Orphan< ::capnp::List< ::uint16_t>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::uint16_t>> disownValues();

  inline  ::uint16_t getWreadRegAddress();
  inline void setWreadRegAddress( ::uint16_t value);

  inline  ::uint16_t getWreadNumOfRegs();
  inline void setWreadNumOfRegs( ::uint16_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CommandFormat::Pipeline {
public:
  typedef CommandFormat Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class ResponseFormat::Reader {
public:
  typedef ResponseFormat Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::riapsmodbuscreqrepuart::messages::ModbusCommands getCommandType() const;

  inline  ::uint16_t getRegisterAddress() const;

  inline  ::uint16_t getNumberOfRegs() const;

  inline bool hasValues() const;
  inline  ::capnp::List< ::uint16_t>::Reader getValues() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class ResponseFormat::Builder {
public:
  typedef ResponseFormat Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::riapsmodbuscreqrepuart::messages::ModbusCommands getCommandType();
  inline void setCommandType( ::riapsmodbuscreqrepuart::messages::ModbusCommands value);

  inline  ::uint16_t getRegisterAddress();
  inline void setRegisterAddress( ::uint16_t value);

  inline  ::uint16_t getNumberOfRegs();
  inline void setNumberOfRegs( ::uint16_t value);

  inline bool hasValues();
  inline  ::capnp::List< ::uint16_t>::Builder getValues();
  inline void setValues( ::capnp::List< ::uint16_t>::Reader value);
  inline void setValues(::kj::ArrayPtr<const  ::uint16_t> value);
  inline  ::capnp::List< ::uint16_t>::Builder initValues(unsigned int size);
  inline void adoptValues(::capnp::Orphan< ::capnp::List< ::uint16_t>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::uint16_t>> disownValues();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class ResponseFormat::Pipeline {
public:
  typedef ResponseFormat Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool LogData::Reader::hasMsg() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool LogData::Builder::hasMsg() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader LogData::Reader::getMsg() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder LogData::Builder::getMsg() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void LogData::Builder::setMsg( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder LogData::Builder::initMsg(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void LogData::Builder::adoptMsg(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> LogData::Builder::disownMsg() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::riapsmodbuscreqrepuart::messages::ModbusCommands CommandFormat::Reader::getCommandType() const {
  return _reader.getDataField< ::riapsmodbuscreqrepuart::messages::ModbusCommands>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::riapsmodbuscreqrepuart::messages::ModbusCommands CommandFormat::Builder::getCommandType() {
  return _builder.getDataField< ::riapsmodbuscreqrepuart::messages::ModbusCommands>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void CommandFormat::Builder::setCommandType( ::riapsmodbuscreqrepuart::messages::ModbusCommands value) {
  _builder.setDataField< ::riapsmodbuscreqrepuart::messages::ModbusCommands>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline  ::uint16_t CommandFormat::Reader::getRegisterAddress() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t CommandFormat::Builder::getRegisterAddress() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void CommandFormat::Builder::setRegisterAddress( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::uint16_t CommandFormat::Reader::getNumberOfRegs() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t CommandFormat::Builder::getNumberOfRegs() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void CommandFormat::Builder::setNumberOfRegs( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline bool CommandFormat::Reader::hasValues() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool CommandFormat::Builder::hasValues() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::uint16_t>::Reader CommandFormat::Reader::getValues() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::uint16_t>::Builder CommandFormat::Builder::getValues() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void CommandFormat::Builder::setValues( ::capnp::List< ::uint16_t>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline void CommandFormat::Builder::setValues(::kj::ArrayPtr<const  ::uint16_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::uint16_t>::Builder CommandFormat::Builder::initValues(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void CommandFormat::Builder::adoptValues(
    ::capnp::Orphan< ::capnp::List< ::uint16_t>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::uint16_t>> CommandFormat::Builder::disownValues() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::uint16_t CommandFormat::Reader::getWreadRegAddress() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t CommandFormat::Builder::getWreadRegAddress() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void CommandFormat::Builder::setWreadRegAddress( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline  ::uint16_t CommandFormat::Reader::getWreadNumOfRegs() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t CommandFormat::Builder::getWreadNumOfRegs() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void CommandFormat::Builder::setWreadNumOfRegs( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline  ::riapsmodbuscreqrepuart::messages::ModbusCommands ResponseFormat::Reader::getCommandType() const {
  return _reader.getDataField< ::riapsmodbuscreqrepuart::messages::ModbusCommands>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::riapsmodbuscreqrepuart::messages::ModbusCommands ResponseFormat::Builder::getCommandType() {
  return _builder.getDataField< ::riapsmodbuscreqrepuart::messages::ModbusCommands>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void ResponseFormat::Builder::setCommandType( ::riapsmodbuscreqrepuart::messages::ModbusCommands value) {
  _builder.setDataField< ::riapsmodbuscreqrepuart::messages::ModbusCommands>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline  ::uint16_t ResponseFormat::Reader::getRegisterAddress() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t ResponseFormat::Builder::getRegisterAddress() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void ResponseFormat::Builder::setRegisterAddress( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::uint16_t ResponseFormat::Reader::getNumberOfRegs() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t ResponseFormat::Builder::getNumberOfRegs() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void ResponseFormat::Builder::setNumberOfRegs( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline bool ResponseFormat::Reader::hasValues() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool ResponseFormat::Builder::hasValues() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::uint16_t>::Reader ResponseFormat::Reader::getValues() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::uint16_t>::Builder ResponseFormat::Builder::getValues() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void ResponseFormat::Builder::setValues( ::capnp::List< ::uint16_t>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline void ResponseFormat::Builder::setValues(::kj::ArrayPtr<const  ::uint16_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::uint16_t>::Builder ResponseFormat::Builder::initValues(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void ResponseFormat::Builder::adoptValues(
    ::capnp::Orphan< ::capnp::List< ::uint16_t>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::uint16_t>> ResponseFormat::Builder::disownValues() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint16_t>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_af97e03d7a1334cf_