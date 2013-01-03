#define SCTP_HEADER_LENGTH 12
#define SCTP_CHUNK_DATA_HEADER_LENGTH 16
#define SCTP_PAYLOAD_M3UA 3

typedef struct sctp_hdr {
    uint16_t sport;
    uint16_t dport;
    uint32_t tag;
    uint32_t checksum;
} __attribute__((packed)) sctp_hdr_t;

typedef struct sctp_chunk_data_chunk {
    uint8_t type;
    uint8_t flags;
    uint16_t len;
    uint32_t tsn;
    uint16_t stream_id;
    uint16_t stream_seq;
    uint32_t ppi;
} __attribute__((packed)) sctp_chunk_data_t;
