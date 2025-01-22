#include "googleapis/client/data/data_reader.h"
#include "googleapis/client/transport/http_request.h"
#include "googleapis/client/transport/http_response.h"
#include "googleapis/client/transport/http_transport.h"
#include "googleapis/util/status.h"
#include <iostream>
#include <boost/scoped_ptr.hpp>
#include "googleapis/client/transport/curl_http_transport.h"

using googleapis::client::HttpRequest;
using googleapis::client::HttpRequestState;
using googleapis::client::HttpResponse;
using googleapis::client::HttpTransport;
using googleapis::client::HttpTransportLayerConfig;
using googleapis::client::HttpTransportOptions;

using googleapis::client::DataReader;
using googleapis::client::NewUnmanagedInMemoryDataReader;

using namespace googleapis;
using namespace googleapis::client;


using namespace std;
using namespace boost;
void IllustrateGet(const char* url, HttpTransport* transport) {
  scoped_ptr<HttpRequest> request(transport->NewHttpRequest(HttpRequest::GET));
  request->set_url(url);
  util::Status status = request->Execute();
  if (!status.ok()) cerr << status.error_message();
}

int main(){
	std::unique_ptr<HttpTransportLayerConfig> config_;
	config_.reset(new HttpTransportLayerConfig);
	HttpTransportFactory* factory = new CurlHttpTransportFactory(config_.get());
	config_->ResetDefaultTransportFactory(factory);
  util::Status status;
	
  HttpTransport* transport = config_->NewDefaultTransport(&status);

string url = "http://www.google.ru";

    IllustrateGet(url.c_str(), transport);
    return 0;

}


