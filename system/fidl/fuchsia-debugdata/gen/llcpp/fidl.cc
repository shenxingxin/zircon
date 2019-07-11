// WARNING: This file is machine generated by fidlgen.

#include <fuchsia/debugdata/llcpp/fidl.h>
#include <memory>

namespace llcpp {

namespace fuchsia {
namespace debugdata {

namespace {

[[maybe_unused]]
constexpr uint64_t kDebugData_Publish_Ordinal = 591050383lu << 32;
extern "C" const fidl_type_t fuchsia_debugdata_DebugDataPublishRequestTable;
[[maybe_unused]]
constexpr uint64_t kDebugData_LoadConfig_Ordinal = 154447333lu << 32;
extern "C" const fidl_type_t fuchsia_debugdata_DebugDataLoadConfigRequestTable;
extern "C" const fidl_type_t fuchsia_debugdata_DebugDataLoadConfigResponseTable;

}  // namespace

zx_status_t DebugData::SyncClient::Publish(::fidl::StringView data_sink, ::zx::vmo data) {
  return DebugData::Call::Publish(zx::unowned_channel(this->channel_), std::move(data_sink), std::move(data));
}

zx_status_t DebugData::Call::Publish(zx::unowned_channel _client_end, ::fidl::StringView data_sink, ::zx::vmo data) {
  constexpr uint32_t _kWriteAllocSize = ::fidl::internal::ClampedMessageSize<PublishRequest>();
  std::unique_ptr<uint8_t[]> _write_bytes_unique_ptr(new uint8_t[_kWriteAllocSize]);
  uint8_t* _write_bytes = _write_bytes_unique_ptr.get();
  PublishRequest _request = {};
  _request._hdr.ordinal = kDebugData_Publish_Ordinal;
  _request.data_sink = std::move(data_sink);
  _request.data = std::move(data);
  auto _linearize_result = ::fidl::Linearize(&_request, ::fidl::BytePart(_write_bytes,
                                                                         _kWriteAllocSize));
  if (_linearize_result.status != ZX_OK) {
    return _linearize_result.status;
  }
  ::fidl::DecodedMessage<PublishRequest> _decoded_request = std::move(_linearize_result.message);
  auto _encode_request_result = ::fidl::Encode(std::move(_decoded_request));
  if (_encode_request_result.status != ZX_OK) {
    return _encode_request_result.status;
  }
  return ::fidl::Write(std::move(_client_end), std::move(_encode_request_result.message));
}

zx_status_t DebugData::SyncClient::Publish(::fidl::BytePart _request_buffer, ::fidl::StringView data_sink, ::zx::vmo data) {
  return DebugData::Call::Publish(zx::unowned_channel(this->channel_), std::move(_request_buffer), std::move(data_sink), std::move(data));
}

zx_status_t DebugData::Call::Publish(zx::unowned_channel _client_end, ::fidl::BytePart _request_buffer, ::fidl::StringView data_sink, ::zx::vmo data) {
  if (_request_buffer.capacity() < PublishRequest::PrimarySize) {
    return ZX_ERR_BUFFER_TOO_SMALL;
  }
  PublishRequest _request = {};
  _request._hdr.ordinal = kDebugData_Publish_Ordinal;
  _request.data_sink = std::move(data_sink);
  _request.data = std::move(data);
  auto _linearize_result = ::fidl::Linearize(&_request, std::move(_request_buffer));
  if (_linearize_result.status != ZX_OK) {
    return _linearize_result.status;
  }
  ::fidl::DecodedMessage<PublishRequest> _decoded_request = std::move(_linearize_result.message);
  auto _encode_request_result = ::fidl::Encode(std::move(_decoded_request));
  if (_encode_request_result.status != ZX_OK) {
    return _encode_request_result.status;
  }
  return ::fidl::Write(std::move(_client_end), std::move(_encode_request_result.message));
}

zx_status_t DebugData::SyncClient::Publish(::fidl::DecodedMessage<PublishRequest> params) {
  return DebugData::Call::Publish(zx::unowned_channel(this->channel_), std::move(params));
}

zx_status_t DebugData::Call::Publish(zx::unowned_channel _client_end, ::fidl::DecodedMessage<PublishRequest> params) {
  params.message()->_hdr = {};
  params.message()->_hdr.ordinal = kDebugData_Publish_Ordinal;
  auto _encode_request_result = ::fidl::Encode(std::move(params));
  if (_encode_request_result.status != ZX_OK) {
    return _encode_request_result.status;
  }
  return ::fidl::Write(std::move(_client_end), std::move(_encode_request_result.message));
}


zx_status_t DebugData::SyncClient::LoadConfig(::fidl::StringView config_name, ::zx::vmo* out_config) {
  return DebugData::Call::LoadConfig(zx::unowned_channel(this->channel_), std::move(config_name), out_config);
}

zx_status_t DebugData::Call::LoadConfig(zx::unowned_channel _client_end, ::fidl::StringView config_name, ::zx::vmo* out_config) {
  constexpr uint32_t _kWriteAllocSize = ::fidl::internal::ClampedMessageSize<LoadConfigRequest>();
  std::unique_ptr<uint8_t[]> _write_bytes_unique_ptr(new uint8_t[_kWriteAllocSize]);
  uint8_t* _write_bytes = _write_bytes_unique_ptr.get();
  LoadConfigRequest _request = {};
  _request._hdr.ordinal = kDebugData_LoadConfig_Ordinal;
  _request.config_name = std::move(config_name);
  auto _linearize_result = ::fidl::Linearize(&_request, ::fidl::BytePart(_write_bytes,
                                                                         _kWriteAllocSize));
  if (_linearize_result.status != ZX_OK) {
    return _linearize_result.status;
  }
  ::fidl::DecodedMessage<LoadConfigRequest> _decoded_request = std::move(_linearize_result.message);
  auto _encode_request_result = ::fidl::Encode(std::move(_decoded_request));
  if (_encode_request_result.status != ZX_OK) {
    return _encode_request_result.status;
  }
  constexpr uint32_t _kReadAllocSize = ::fidl::internal::ClampedMessageSize<LoadConfigResponse>();
  FIDL_ALIGNDECL uint8_t _read_bytes[_kReadAllocSize];
  ::fidl::BytePart _response_bytes(_read_bytes, _kReadAllocSize);
  auto _call_result = ::fidl::Call<LoadConfigRequest, LoadConfigResponse>(
    std::move(_client_end), std::move(_encode_request_result.message), std::move(_response_bytes));
  if (_call_result.status != ZX_OK) {
    return _call_result.status;
  }
  auto _decode_result = ::fidl::Decode(std::move(_call_result.message));
  if (_decode_result.status != ZX_OK) {
    return _decode_result.status;
  }
  auto& _response = *_decode_result.message.message();
  *out_config = std::move(_response.config);
  return ZX_OK;
}

::fidl::DecodeResult<DebugData::LoadConfigResponse> DebugData::SyncClient::LoadConfig(::fidl::BytePart _request_buffer, ::fidl::StringView config_name, ::fidl::BytePart _response_buffer, ::zx::vmo* out_config) {
  return DebugData::Call::LoadConfig(zx::unowned_channel(this->channel_), std::move(_request_buffer), std::move(config_name), std::move(_response_buffer), out_config);
}

::fidl::DecodeResult<DebugData::LoadConfigResponse> DebugData::Call::LoadConfig(zx::unowned_channel _client_end, ::fidl::BytePart _request_buffer, ::fidl::StringView config_name, ::fidl::BytePart _response_buffer, ::zx::vmo* out_config) {
  if (_request_buffer.capacity() < LoadConfigRequest::PrimarySize) {
    return ::fidl::DecodeResult<LoadConfigResponse>(ZX_ERR_BUFFER_TOO_SMALL, ::fidl::internal::kErrorRequestBufferTooSmall);
  }
  LoadConfigRequest _request = {};
  _request._hdr.ordinal = kDebugData_LoadConfig_Ordinal;
  _request.config_name = std::move(config_name);
  auto _linearize_result = ::fidl::Linearize(&_request, std::move(_request_buffer));
  if (_linearize_result.status != ZX_OK) {
    return ::fidl::DecodeResult<LoadConfigResponse>(_linearize_result.status, _linearize_result.error);
  }
  ::fidl::DecodedMessage<LoadConfigRequest> _decoded_request = std::move(_linearize_result.message);
  auto _encode_request_result = ::fidl::Encode(std::move(_decoded_request));
  if (_encode_request_result.status != ZX_OK) {
    return ::fidl::DecodeResult<LoadConfigResponse>(_encode_request_result.status, _encode_request_result.error);
  }
  auto _call_result = ::fidl::Call<LoadConfigRequest, LoadConfigResponse>(
    std::move(_client_end), std::move(_encode_request_result.message), std::move(_response_buffer));
  if (_call_result.status != ZX_OK) {
    return ::fidl::DecodeResult<LoadConfigResponse>(_call_result.status, _call_result.error);
  }
  auto _decode_result = ::fidl::Decode(std::move(_call_result.message));
  if (_decode_result.status != ZX_OK) {
    return _decode_result;
  }
  auto& _response = *_decode_result.message.message();
  *out_config = std::move(_response.config);
  return _decode_result;
}

::fidl::DecodeResult<DebugData::LoadConfigResponse> DebugData::SyncClient::LoadConfig(::fidl::DecodedMessage<LoadConfigRequest> params, ::fidl::BytePart response_buffer) {
  return DebugData::Call::LoadConfig(zx::unowned_channel(this->channel_), std::move(params), std::move(response_buffer));
}

::fidl::DecodeResult<DebugData::LoadConfigResponse> DebugData::Call::LoadConfig(zx::unowned_channel _client_end, ::fidl::DecodedMessage<LoadConfigRequest> params, ::fidl::BytePart response_buffer) {
  params.message()->_hdr = {};
  params.message()->_hdr.ordinal = kDebugData_LoadConfig_Ordinal;
  auto _encode_request_result = ::fidl::Encode(std::move(params));
  if (_encode_request_result.status != ZX_OK) {
    return ::fidl::DecodeResult<DebugData::LoadConfigResponse>(
      _encode_request_result.status,
      _encode_request_result.error,
      ::fidl::DecodedMessage<DebugData::LoadConfigResponse>());
  }
  auto _call_result = ::fidl::Call<LoadConfigRequest, LoadConfigResponse>(
    std::move(_client_end), std::move(_encode_request_result.message), std::move(response_buffer));
  if (_call_result.status != ZX_OK) {
    return ::fidl::DecodeResult<DebugData::LoadConfigResponse>(
      _call_result.status,
      _call_result.error,
      ::fidl::DecodedMessage<DebugData::LoadConfigResponse>());
  }
  return ::fidl::Decode(std::move(_call_result.message));
}


bool DebugData::TryDispatch(Interface* impl, fidl_msg_t* msg, ::fidl::Transaction* txn) {
  if (msg->num_bytes < sizeof(fidl_message_header_t)) {
    zx_handle_close_many(msg->handles, msg->num_handles);
    txn->Close(ZX_ERR_INVALID_ARGS);
    return true;
  }
  fidl_message_header_t* hdr = reinterpret_cast<fidl_message_header_t*>(msg->bytes);
  switch (hdr->ordinal) {
    case kDebugData_Publish_Ordinal: {
      auto result = ::fidl::DecodeAs<PublishRequest>(msg);
      if (result.status != ZX_OK) {
        txn->Close(ZX_ERR_INVALID_ARGS);
        return true;
      }
      auto message = result.message.message();
      impl->Publish(std::move(message->data_sink), std::move(message->data),
        Interface::PublishCompleter::Sync(txn));
      return true;
    }
    case kDebugData_LoadConfig_Ordinal: {
      auto result = ::fidl::DecodeAs<LoadConfigRequest>(msg);
      if (result.status != ZX_OK) {
        txn->Close(ZX_ERR_INVALID_ARGS);
        return true;
      }
      auto message = result.message.message();
      impl->LoadConfig(std::move(message->config_name),
        Interface::LoadConfigCompleter::Sync(txn));
      return true;
    }
    default: {
      return false;
    }
  }
}

bool DebugData::Dispatch(Interface* impl, fidl_msg_t* msg, ::fidl::Transaction* txn) {
  bool found = TryDispatch(impl, msg, txn);
  if (!found) {
    zx_handle_close_many(msg->handles, msg->num_handles);
    txn->Close(ZX_ERR_NOT_SUPPORTED);
  }
  return found;
}


void DebugData::Interface::LoadConfigCompleterBase::Reply(::zx::vmo config) {
  constexpr uint32_t _kWriteAllocSize = ::fidl::internal::ClampedMessageSize<LoadConfigResponse>();
  FIDL_ALIGNDECL uint8_t _write_bytes[_kWriteAllocSize] = {};
  auto& _response = *reinterpret_cast<LoadConfigResponse*>(_write_bytes);
  _response._hdr.ordinal = kDebugData_LoadConfig_Ordinal;
  _response.config = std::move(config);
  ::fidl::BytePart _response_bytes(_write_bytes, _kWriteAllocSize, sizeof(LoadConfigResponse));
  CompleterBase::SendReply(::fidl::DecodedMessage<LoadConfigResponse>(std::move(_response_bytes)));
}

void DebugData::Interface::LoadConfigCompleterBase::Reply(::fidl::BytePart _buffer, ::zx::vmo config) {
  if (_buffer.capacity() < LoadConfigResponse::PrimarySize) {
    CompleterBase::Close(ZX_ERR_INTERNAL);
    return;
  }
  auto& _response = *reinterpret_cast<LoadConfigResponse*>(_buffer.data());
  _response._hdr.ordinal = kDebugData_LoadConfig_Ordinal;
  _response.config = std::move(config);
  _buffer.set_actual(sizeof(LoadConfigResponse));
  CompleterBase::SendReply(::fidl::DecodedMessage<LoadConfigResponse>(std::move(_buffer)));
}

void DebugData::Interface::LoadConfigCompleterBase::Reply(::fidl::DecodedMessage<LoadConfigResponse> params) {
  params.message()->_hdr = {};
  params.message()->_hdr.ordinal = kDebugData_LoadConfig_Ordinal;
  CompleterBase::SendReply(std::move(params));
}


}  // namespace debugdata
}  // namespace fuchsia
}  // namespace llcpp