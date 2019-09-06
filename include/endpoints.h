#ifndef ENDPOINTS_H
#define ENDPOINTS_H
#include<string> 

#define API_URL    "https://api.robinhood.com"
#define LOGIN_URL  "/oauth2/token/"
#define LOGOUT_URL "/oauth2/revoke_token"

using namespace std;

class Endpoints
{
  public:
    static string login;
    static string logout;

};

string Endpoints::login  = string(API_URL) + string(LOGIN_URL);
string Endpoints::logout = string(API_URL) + string(LOGOUT_URL);

#endif
