/*
Copyright 2018 SabzCity

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*
OS just support IPv6 so 4 level of routing exist:
- 0 to 31 bit (Global routing)
- 32 to 63 bit (ISP routing)
- 64 to 112 bit (Edge routing)
- 113 to 128 bit (OS routing)

By each block OS get from upper router it is use related router-ip.
*/

// Each app can have one unique IPv6
