//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPbMsgSenderBase.h"

@interface QQContactsTmpMessageSender : QQPbMsgSenderBase
{
}

+ (id)GetInstance;
- (_Bool)OnReceiveSendMsgRespOfSendSeq:(unsigned int)arg1 ResultCode:(unsigned int)arg2 ErrMsg:(const basic_string_075b6133 *)arg3 ReqSendTimeFromServer:(unsigned int)arg4;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (struct RoutingHead *)GenRoutingHeadWithFromPhone:(id)arg1 toPhone:(id)arg2 dstUin:(unsigned long long)arg3;
- (int)getMsgSendType:(id)arg1;

@end

