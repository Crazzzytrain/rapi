#include<config.h>
#include<curl_client.h>

CurlClient::CurlClient()
{
  curl_global_init(CURL_GLOBAL_DEFAULT);
  CURLM* multi_handle = curl_multi_init();

  curl_multi_setopt(multi_handle,CURLMOPT_MAX_TOTAL_CONNECTIONS,CC_MAX_CONN);
  curl_multi_setopt(multi_handle,CURLMOPT_PIPELINING,CURLPIPE_MULTIPLEX | CURLPIPE_HTTP1);

}
CURL* CurlClient::getHandle(char* url)
{
  CURL* handle = curl_easy_init();

  curl_easy_setopt(handle, CURLOPT_HTTP_VERSION, CURL_HTTP_VERSION_2TLS);
  curl_easy_setopt(handle, CURLOPT_URL, url);



}


