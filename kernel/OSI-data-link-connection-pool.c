/* For license and copyright information please see LEGAL file in repository */

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