#include <config.h>
#include <cstdlib> 
#include <cstring>
#include <cstdio> 
#include <curl/curl.h>
#include <curl_client.h>
#include <endpoints.h>


int main(int argc,char* argv[])
{
  CurlClient curl;
 
  char username[USERNAME_LENGTH];
  char password[PASSWORD_LENGTH];

  printf("%s","Robinhood Username > ");
  fgets(username,USERNAME_LENGTH,stdin);

  printf("%s","Robinhood Password > ");
  fgets(password,PASSWORD_LENGTH,stdin);


  printf("%s\n",username);
  

  printf("%s\n",Endpoints::logout.c_str());
}
