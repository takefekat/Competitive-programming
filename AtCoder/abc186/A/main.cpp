#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<vll> vvll;

{ % if mod % }
const long long MOD = None;
{ % endif % } { % if yes_str % }
const string YES = "None";
{ % endif % } { % if no_str % }
const string NO = "None";
{ % endif % }

{
  % if prediction_success %
}
void solve(long long N, long long W){

} {
  % endif %
}

int main() {
  { % if prediction_success % }
  {
    { input_part }
  }
  solve(N, W);
  { % else % }  // Failed to predict input format
  {
    % endif %
  }
  return 0;
}