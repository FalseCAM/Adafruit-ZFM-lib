/*
 * ZFM_CONST.h
 *
 *  Created on: Jan 29, 2014
 *      Author: Brent.Erickson
 */

#ifndef ZFM_CONST_H_
#define ZFM_CONST_H_

	static const char ZFM_HEADER[] = {static_cast<const char>(0xEF), static_cast<const char>(0x01)};
	static const char ZFM_ADDRESS[] = {static_cast<const char>(0xFF), static_cast<const char>(0xFF),
					static_cast<const char>(0xFF), static_cast<const char>(0xFF)};

	static const char ZFM_PKG_CMD = 0x01;
	static const char ZFM_PKG_DATA = 0x02;
	static const char ZFM_PKG_ACK = 0x07;
	static const char ZFM_PKG_END = 0x08;


	static const int ZFM_ACKPACKETLENGTH = 12;
	static const int ZFM_MATCHACKPACKETLENGTH = ZFM_ACKPACKETLENGTH + 4;
	static const char ZFM_ACK_SUCCESS = 0x00;
	static const char ZFM_ACK_ERR_D_PKG = 0x01;
	static const char ZFM_ACK_ERR_NO_FINGER= 0x02;
	static const char ZFM_ACK_ERR_ENROLL = 0x03;
	static const char ZFM_ACK_ERR_CHAR_DISORDERLY = 0x06;
	static const char ZFM_ACK_ERR_CHAR_UNIQUENESS = 0x07;
	static const char ZFM_ACK_ERR_MATCH_FAIL = 0x08;
	static const char ZFM_ACK_ERR_MATCH_NOT_FOUND = 0x09;
	static const char ZFM_ACK_ERR_CHAR_COMBINE_FAIL = 0x0A;
	static const char ZFM_ACK_ERR_ADDRESS_OUT_OF_RANGE = 0x0B;
	static const char ZFM_ACK_ERR_TEMPLATE_INVALID = 0x0C;
	static const char ZFM_ACK_ERR_TEMPLATE_UPLOAD = 0x0D;
	static const char ZFM_ACK_ERR_DATA_RECEIVE = 0x0E;
	static const char ZFM_ACK_ERR_UPLOAD_IMAGE = 0x0F;
	static const char ZFM_ACK_ERR_DEELTE_TEMPLATE = 0x10;
	static const char ZFM_ACK_ERR_CLEAR_LIBRARY = 0x11;
	static const char ZFM_ACK_ERR_GENERATE_IMAGE = 0x15;
	static const char ZFM_ACK_ERR_WRITE_FLASH = 0x18;
	static const char ZFM_ACK_ERR_NO_DEFINITION = 0x19;
	static const char ZFM_ACK_ERR_INVALID_REGISTER = 0x1A;
	static const char ZFM_ACK_ERR_REGISTER_CONFIGURATION = 0x1B;
	static const char ZFM_ACK_ERR_NOTEPAD_PAGE_NUMBER = 0x1C;
	static const char ZFM_ACK_ERR_COMM_PORT = 0x1D;

	static const char ZFM_CMD_CAPTURE_FINGER = 0x01;		//GenImage
	static const char ZFM_CMD_STORE_TO_BUFFER = 0x02;		//Img2Tz
	static const char ZFM_CMD_MATCH_BUFFERS = 0x03;		//Match
	static const char ZFM_CMD_SEARCH = 0x04;				//Search
	static const char ZFM_CMD_GENERATE_TEMPLATE = 0x05;	//RegModel
	static const char ZFM_CMD_STORE = 0x06;				//Store
	static const char ZFM_CMD_LOAD_BUFFER = 0x07;			//LoadChar
	static const char ZFM_CMD_UPLOAD_BUFFER = 0x08;		//UpChar
	static const char ZFM_CMD_DOWNLOAD_BUFFER = 0x09;		//DownChar
	static const char ZFM_CMD_UPLOAD_IMAGE = 0x0A;		//UpImage
	static const char ZFM_CMD_DOWNLOAD_IMAGE = 0x0B;		//DownImage
	static const char ZFM_CMD_DELETE_STORED = 0x0C;		//DeleteChar
	static const char ZFM_CMD_DELETE_ALL = 0x0D;			//Empty
	static const char ZFM_CMD_SET_SYS_PARAMETER = 0x0E;	//SetSysPara
	static const char ZFM_CMD_READ_SYS_PARAMETER = 0x0F;	//ReadSysPara
	static const char ZFM_CMD_VERIFY_PASSWORD = 0x1;		//VfyPwd
	static const char ZFM_CMD_GET_RAND = 0x14;			//GetRandomCode
	static const char ZFM_CMD_SET_ADDRESS = 0x15;			//SetAddr
	static const char ZFM_CMD_HANDSHAKE = 0x17;			//Handshake
	static const char ZFM_CMD_WRITE_DATA = 0x18;			//WriteNotepad
	static const char ZFM_CMD_READ_DATA = 0x19;			//ReadNotepad
	static const char ZFM_CMD_READ_TEMPLATE = 0x1D;		//TemplateNum

	static const int ZFM_CMD_CAPTURE_FINGER_LEN = 1;		//GenImage
	static const int ZFM_CMD_STORE_TO_BUFFER_LEN = 2;		//Img2Tz
	static const int ZFM_CMD_MATCH_BUFFERS_LEN = 1;		//Match
	static const int ZFM_CMD_SEARCH_LEN = 6;				//Search
	static const int ZFM_CMD_GENERATE_TEMPLATE_LEN = 1;	//RegModel
	static const int ZFM_CMD_STORE_LEN = 4;				//Store
	static const int ZFM_CMD_LOAD_BUFFER_LEN = 4;			//LoadChar
	static const int ZFM_CMD_UPLOAD_BUFFER_LEN = 2;		//UpChar
	static const int ZFM_CMD_DOWNLOAD_BUFFER_LEN = 2;		//DownChar
	static const int ZFM_CMD_UPLOAD_IMAGE_LEN = 1;		//UpImage
	static const int ZFM_CMD_DOWNLOAD_IMAGE_LEN = 1;		//DownImage
	static const int ZFM_CMD_DELETE_STORED_LEN = 5;		//DeleteChar
	static const int ZFM_CMD_DELETE_ALL_LEN = 1;			//Empty
	static const int ZFM_CMD_SET_SYS_PARAMETER_LEN = 3;	//SetSysPara
	static const int ZFM_CMD_READ_SYS_PARAMETER_LEN = 1;	//ReadSysPara
	static const int ZFM_CMD_VERIFY_PASSWORD_LEN = 5;		//VfyPwd
	static const int ZFM_CMD_GET_RAND_LEN = 1;			//GetRandomCode
	static const int ZFM_CMD_SET_ADDRESS_LEN = 5;			//SetAddr
	static const int ZFM_CMD_HANDSHAKE_LEN = 2;			//Handshake
	static const int ZFM_CMD_WRITE_DATA_LEN = 34;			//WriteNotepad
	static const int ZFM_CMD_READ_DATA_LEN = 2;			//ReadNotepad
	static const int ZFM_CMD_READ_TEMPLATE_LEN = 1;		//TemplateNum





#endif /* ZFM_CONST_H_ */
