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
Some structure but in golang!!

// DataLinkConnectionData :
type DataLinkConnectionData struct {
	MACAddress           [6]byte  // Use as Connection UUID.
	OwnerID              uint64   // Any User Type. Can't change after creation.
	EncryptionKey        [16]byte // 128bit encryption key
	MTU                  uint16
	MRU                  uint16
	IssueAt              uint64 //
	BytesSent            uint64 // Counts the bytes of payload data sent.
	PacketsSent          uint64 // Counts packets sent.
	BytesReceived        uint64 // Counts the bytes of payload data Receive.
	PacketsReceived      uint64 // Counts packets Receive.
	Description          string //
}

// DataLinkConnections :
// --TODO-- Just one process can give new ConnectionID due concurrency problems! or lock needs
var DataLinkConnections map[[6]byte]*DataLinkConnectionData
*/