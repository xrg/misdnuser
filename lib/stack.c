#include <errno.h>
#include <string.h>
#include "mISDNlib.h"
// #include <stdio.h>

const char *
mISDN_Prim_to_cmd(unsigned int prim)
{
	switch (prim & MISDN_CMD_MASK) {
	case MGR_FUNCTION:
		return "MGR_FUNCTION";
	case MGR_GETOBJECT:
		return "MGR_GETOBJECT";
	case MGR_NEWOBJECT:
		return "MGR_NEWOBJECT";
	case MGR_DELOBJECT:
		return "MGR_DELOBJECT";
	case MGR_NEWENTITY:
		return "MGR_NEWENTITY";
	case MGR_DELENTITY:
		return "MGR_DELENTITY";
	case MGR_GETSTACK:
		return "MGR_GETSTACK";
	case MGR_NEWSTACK:
		return "MGR_NEWSTACK";
	case MGR_DELSTACK:
		return "MGR_DELSTACK";
	case MGR_SETSTACK:
		return "MGR_SETSTACK";
	case MGR_CLEARSTACK:
		return "MGR_CLEARSTACK";
	case MGR_REGLAYER:
		return "MGR_REGLAYER";
	case MGR_UNREGLAYER:
		return "MGR_UNREGLAYER";
	case MGR_SELCHANNEL:
		return "MGR_SELCHANNEL";
	case MGR_SETSTACK_NW:
		return "MGR_SETSTACK_NW";
	case MGR_ADDSTPARA:
		return "MGR_ADDSTPARA";
	case MGR_CLRSTPARA:
		return "MGR_CLRSTPARA";
	case MGR_ADDLAYER:
		return "MGR_ADDLAYER";
	case MGR_GETLAYER:
		return "MGR_GETLAYER";
	case MGR_GETLAYERID:
		return "MGR_GETLAYERID";
	case MGR_NEWLAYER:
		return "MGR_NEWLAYER";
	case MGR_DELLAYER:
		return "MGR_DELLAYER";
	case MGR_CTRLREADY:
		return "MGR_CTRLREADY";
	case MGR_STACKREADY:
		return "MGR_STACKREADY";
	case MGR_STOPSTACK:
		return "MGR_STOPSTACK";
	case MGR_STARTSTACK:
		return "MGR_STARTSTACK";
	case MGR_RELEASE:
		return "MGR_RELEASE";
	case MGR_GETDEVICE:
		return "MGR_GETDEVICE";
	case MGR_DELDEVICE:
		return "MGR_DELDEVICE";
	case MGR_SETDEVOPT:
		return "MGR_SETDEVOPT";
	case MGR_GETDEVOPT:
		return "MGR_GETDEVOPT";
	case MGR_INITTIMER:
		return "MGR_INITTIMER";
	case MGR_ADDTIMER:
		return "MGR_ADDTIMER";
	case MGR_DELTIMER:
		return "MGR_DELTIMER";
	case MGR_REMOVETIMER:
		return "MGR_REMOVETIMER";
	case MGR_TIMER:
		return "MGR_TIMER";
	case MGR_CONTROL:
		return "MGR_CONTROL";
	case MGR_STATUS:
		return "MGR_STATUS";
	case MGR_HASPROTOCOL:
		return "MGR_HASPROTOCOL";
	case MGR_EVALSTACK:
		return "MGR_EVALSTACK";
	case MGR_GLOBALOPT:
		return "MGR_GLOBALOPT";
	case MGR_SHORTSTATUS:
		return "MGR_SHORTSTATUS";
	case MGR_LOADFIRM:
		return "MGR_LOADFIRM";
	case MGR_LOGDATA:
		return "MGR_LOGDATA";
	case MGR_DEBUGDATA:
		return "MGR_DEBUGDATA";
	case MGR_VERSION:
		return "MGR_VERSION";
	case PH_SIGNAL:
		return "PH_SIGNAL";
	case PH_CONTROL:
		return "PH_CONTROL";
	case PH_STATUS:
		return "PH_STATUS";
	case PH_ACTIVATE:
		return "PH_ACTIVATE";
	case PH_DEACTIVATE:
		return "PH_DEACTIVATE";
	case PH_DATA:
		return "PH_DATA";
	case MPH_DEACTIVATE:
		return "MPH_DEACTIVATE";
	case MPH_ACTIVATE:
		return "MPH_ACTIVATE";
	case MPH_INFORMATION:
		return "MPH_INFORMATION";
	case DL_ESTABLISH:
		return "DL_ESTABLISH";
	case DL_RELEASE:
		return "DL_RELEASE";
	case DL_DATA:
		return "DL_DATA";
	case DL_UNITDATA:
		return "DL_UNITDATA";
	case MDL_UNITDATA:
		return "MDL_UNITDATA";
	case MDL_ASSIGN:
		return "MDL_ASSIGN";
	case MDL_REMOVE:
		return "MDL_REMOVE";
	case MDL_ERROR:
		return "MDL_ERROR";
	case MDL_INFORMATION:
		return "MDL_INFORMATION";
	case MDL_STATUS:
		return "MDL_STATUS";
	case MDL_FINDTEI:
		return "MDL_FINDTEI";
	case CC_ALERTING:
		return "CC_ALERTING";
	case CC_PROCEEDING:
		return "CC_PROCEEDING";
	case CC_PROGRESS:
		return "CC_PROGRESS";
	case CC_SETUP:
		return "CC_SETUP";
	case CC_CONNECT:
		return "CC_CONNECT";
	case CC_SETUP_ACKNOWLEDGE:
		return "CC_SETUP_ACKNOWLEDGE";
	case CC_CONNECT_ACKNOWLEDGE:
		return "CC_CONNECT_ACKNOWLEDGE";
	case CC_USER_INFORMATION:
		return "CC_USER_INFORMATION";
	case CC_SUSPEND_REJECT:
		return "CC_SUSPEND_REJECT";
	case CC_RESUME_REJECT:
		return "CC_RESUME_REJECT";
	case CC_HOLD:
		return "CC_HOLD";
	case CC_SUSPEND:
		return "CC_SUSPEND";
	case CC_RESUME:
		return "CC_RESUME";
	case CC_HOLD_ACKNOWLEDGE:
		return "CC_HOLD_ACKNOWLEDGE";
	case CC_SUSPEND_ACKNOWLEDGE:
		return "CC_SUSPEND_ACKNOWLEDGE";
	case CC_RESUME_ACKNOWLEDGE:
		return "CC_RESUME_ACKNOWLEDGE";
	case CC_HOLD_REJECT:
		return "CC_HOLD_REJECT";
	case CC_RETRIEVE:
		return "CC_RETRIEVE";
	case CC_RETRIEVE_ACKNOWLEDGE:
		return "CC_RETRIEVE_ACKNOWLEDGE";
	case CC_RETRIEVE_REJECT:
		return "CC_RETRIEVE_REJECT";
	case CC_DISCONNECT:
		return "CC_DISCONNECT";
	case CC_RESTART:
		return "CC_RESTART";
	case CC_RELEASE:
		return "CC_RELEASE";
	case CC_RELEASE_COMPLETE:
		return "CC_RELEASE_COMPLETE";
	case CC_FACILITY:
		return "CC_FACILITY";
	case CC_NOTIFY:
		return "CC_NOTIFY";
	case CC_STATUS_ENQUIRY:
		return "CC_STATUS_ENQUIRY";
	case CC_INFORMATION:
		return "CC_INFORMATION";
	case CC_STATUS:
		return "CC_STATUS";
	case CC_NEW_CR:
		return "CC_NEW_CR";
	case CC_RELEASE_CR:
		return "CC_RELEASE_CR";
	case CC_TIMEOUT:
		return "CC_TIMEOUT";
	case CC_B3_DATA:
		return "CC_B3_DATA";
	case CAPI_MESSAGE_REQUEST:
		return "CAPI_MESSAGE_REQUEST";
	}

	return "";
}
const char *
mISDN_Prim_to_sub(unsigned int prim)
{
	switch (prim & MISDN_SUB_MASK) {
	case REQUEST:
		return "| REQUEST";
	case CONFIRM:
		return "| CONFIRM";
	case INDICATION:
		return "| INDICATION";
	case RESPONSE:
		return "| RESPONSE";
	case SUB_ERROR:
		return "| SUB_ERROR";
	default:
		return "| unknown";
	}

	return "";
}



int
mISDN_get_stack_count(int fid)
{
	iframe_t	ifr;
	int		ret;

	set_wrrd_atomic(fid);
	ret = mISDN_write_frame(fid, &ifr, 0, MGR_GETSTACK | REQUEST,
		0, 0, NULL, TIMEOUT_1SEC);
	if (ret) {
		clear_wrrd_atomic(fid);
		return(ret);
	}
	ret = mISDN_read_frame(fid, &ifr, sizeof(iframe_t), 0,
		MGR_GETSTACK | CONFIRM, TIMEOUT_1SEC);
	clear_wrrd_atomic(fid);
	if (ret != mISDN_HEADER_LEN) {
		if (ret > 0)
			ret = -EINVAL;
	} else {
		if (ifr.len)
			ret = ifr.len;
		else
			ret = ifr.dinfo;
	}
	return(ret);
}

int
mISDN_new_stack(int fid, stack_info_t *s_info)
{
	unsigned char buf[sizeof(stack_info_t) + mISDN_HEADER_LEN] __attribute__((aligned(4)));
	iframe_t      ifr;
	int	      ret;

	set_wrrd_atomic(fid);
	ret = mISDN_write_frame(fid, buf, 0, MGR_NEWSTACK | REQUEST,
		0, sizeof(stack_info_t), s_info, TIMEOUT_1SEC);
	if (ret) {
		clear_wrrd_atomic(fid);
		return(ret);
	}
	ret = mISDN_read_frame(fid, &ifr, sizeof(iframe_t), 0,
		MGR_NEWSTACK | CONFIRM, TIMEOUT_1SEC);
	clear_wrrd_atomic(fid);
	if (ret == mISDN_HEADER_LEN) {
		if (ifr.len)
			ret = ifr.len;
		else
			ret = ifr.dinfo;
	}
	return(ret);
}

int
mISDN_set_stack(int fid, int stack, mISDN_pid_t *pid)
{
	unsigned char buf[sizeof(mISDN_pid_t) + mISDN_HEADER_LEN] __attribute__((aligned(4)));
	iframe_t      ifr;
	int	      ret;

	set_wrrd_atomic(fid);
	ret = mISDN_write_frame(fid, buf, stack, MGR_SETSTACK | REQUEST,
		0, sizeof(mISDN_pid_t), pid, TIMEOUT_1SEC);
	if (ret) {
		clear_wrrd_atomic(fid);
		return(ret);
	}
	ret = mISDN_read_frame(fid, &ifr, sizeof(iframe_t),
		stack, MGR_SETSTACK | CONFIRM, TIMEOUT_1SEC);
	clear_wrrd_atomic(fid);
	if (ret == mISDN_HEADER_LEN)
		ret = ifr.len;
	else if (ret>0)
		ret = -EINVAL;
	return(ret);
}

int
mISDN_clear_stack(int fid, int stack)
{
	iframe_t	ifr;
	int		ret;

	set_wrrd_atomic(fid);
	ret = mISDN_write_frame(fid, &ifr, stack, MGR_CLEARSTACK | REQUEST,
		0, 0, NULL, TIMEOUT_1SEC);
	if (ret) {
		clear_wrrd_atomic(fid);
		return(ret);
	}
	ret = mISDN_read_frame(fid, &ifr, sizeof(iframe_t),
		stack, MGR_CLEARSTACK | CONFIRM, TIMEOUT_1SEC);
	clear_wrrd_atomic(fid);
	if (ret == mISDN_HEADER_LEN)
		ret = ifr.len;
	else if (ret>0)
		ret = -EINVAL;
	return(ret);
}

int
mISDN_get_stack_info(int fid, int stack, void *info, size_t max_len)
{
	iframe_t	ifr;
	int		ret;

	set_wrrd_atomic(fid);

	ret = mISDN_write_frame(fid, &ifr, stack, MGR_GETSTACK | REQUEST,
		0, 0, NULL, TIMEOUT_1SEC);
	if (ret) {
		clear_wrrd_atomic(fid);
		return(ret);
	}
	ret = mISDN_read_frame(fid, info, max_len,
		stack, MGR_GETSTACK | CONFIRM, TIMEOUT_1SEC);
	clear_wrrd_atomic(fid);
	if (ret == mISDN_HEADER_LEN)
		memcpy(&ret, &(((iframe_t *)info)->len), sizeof(ret));
	return(ret);
}

void
mISDNprint_stack_info(FILE *file, stack_info_t *s_info)
{
	int i;

	fprintf(file, "stack id %08x\n", s_info->id);
	fprintf(file, "     ext %08x\n", s_info->extentions);
	for(i=0;i<=MAX_LAYER_NR;i++)
		fprintf(file, "   prot%d %08x\n", i, s_info->pid.protocol[i]);
	for(i=0;i<s_info->instcnt;i++)
		fprintf(file, "   inst%d %08x\n", i, s_info->inst[i]);
	fprintf(file, "     mgr %08x\n", s_info->mgr);
	fprintf(file, "  master %08x\n", s_info->master);
	fprintf(file, "   clone %08x\n", s_info->clone);
	for(i=0;i<s_info->childcnt;i++)
		fprintf(file, "  child%d %08x\n", i, s_info->child[i]);
}
