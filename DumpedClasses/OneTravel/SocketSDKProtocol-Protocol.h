//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SocketSDKProtocol <NSObject>
- (void)progresscallback:(unsigned long long)arg1 eProgressState:(unsigned int)arg2 uProgressPercent:(unsigned int)arg3;
- (void)recvmessageWithData:(unsigned int)arg1 seqID:(unsigned long long)arg2 sData:(const void *)arg3 uLength:(unsigned int)arg4;
- (void)sendcallback:(int)arg1 eMsgType:(unsigned int)arg2 uSeqId:(unsigned long long)arg3;
@end
