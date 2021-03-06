//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FXMVListVM : NSObject
{
    CDUnknownBlockType _successCallBack;
    CDUnknownBlockType _failedCallBack;
    CDUnknownBlockType _deleteCallBack;
    long long _mvTotal;
    long long _otherId;
}

@property(nonatomic) long long otherId; // @synthesize otherId=_otherId;
@property(nonatomic) long long mvTotal; // @synthesize mvTotal=_mvTotal;
@property(copy, nonatomic) CDUnknownBlockType deleteCallBack; // @synthesize deleteCallBack=_deleteCallBack;
@property(copy, nonatomic) CDUnknownBlockType failedCallBack; // @synthesize failedCallBack=_failedCallBack;
@property(copy, nonatomic) CDUnknownBlockType successCallBack; // @synthesize successCallBack=_successCallBack;
- (void).cxx_destruct;
- (void)deleteMVWithMVId:(long long)arg1;
- (void)requestMyMVListWithPage:(long long)arg1;
- (void)requestOtherMVListWithPage:(long long)arg1 pageSize:(long long)arg2;
- (void)requestOtherMVListWithPage:(long long)arg1;
- (id)init;

@end

