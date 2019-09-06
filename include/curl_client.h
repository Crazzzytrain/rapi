#ifndef CURL_CLIENT_H
#define CURL_CLIENT_H
#include <curl/curl.h>

class CurlClient
{
  public:
    CurlClient();

  private:
    CURL* getHandle(char*);
}; 


#endif
