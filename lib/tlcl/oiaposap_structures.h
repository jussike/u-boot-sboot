/*
 * oiaposap_structures.h
 *
 *  Created on: Dec 21, 2012
 *      Author: teddy
 */

#ifndef OIAPOSAP_STRUCTURES_H_
#define OIAPOSAP_STRUCTURES_H_

const struct s_tpm_oiap_open_cmd {
	uint8_t buffer[10];
} tpm_oiap_open_cmd = {{
	0x0, 0xc1,
	0x0, 0x0, 0x0, 0xa,
	0x0, 0x0, 0x0, 0xa
}, };

const struct s_tpm_osap_open_cmd {
	uint8_t buffer[36];
	uint8_t type;
	uint8_t value;
	uint8_t nonce;
} tpm_osap_open_cmd = {{
	0x0, 0xc1,
	0x0, 0x0, 0x0, 0x24, /* 2 + 4 + 4 + 2 + 4 + 20 */
	0x0, 0x0, 0x0, 0x0B,
}, 10, 12, 16};

const struct s_tpm_handle_close_cmd {
	uint8_t buffer[14];
	uint16_t handle;
} tpm_handle_close_cmd = {{
	0x0, 0xc1,
	0x0, 0x0, 0x0, 0xe,
	0x0, 0x0, 0x0, 0x96,
}, 10, };


#endif /* OIAPOSAP_STRUCTURES_H_ */