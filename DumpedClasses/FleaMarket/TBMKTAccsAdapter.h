//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTAccsConnection.h"

@class NSObject<OS_dispatch_queue>;

@interface TBMKTAccsAdapter : MKTAccsConnection
{
    NSObject<OS_dispatch_queue> *_recvMsgQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recvMsgQueue; // @synthesize recvMsgQueue=_recvMsgQueue;
- (void).cxx_destruct;
- (id)send:(id)arg1 withError:(id *)arg2;

@end
