//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;
@protocol MQQShortcutIconFetcherDelegate, OS_dispatch_queue;

@interface MQQShortcutIconFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_shortcutQueue;
    NSString *_kvoContext;
    id <MQQShortcutIconFetcherDelegate> _delegate;
    NSMutableArray *_iconRequestFetcher;
    NSMutableArray *_iconRequestWaiting;
    NSMutableDictionary *_iconRetryTime;
    NSMutableDictionary *_iconRequestDict;
    NSNumber *_requestCount;
}

@property(retain, nonatomic) NSNumber *requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSMutableDictionary *iconRequestDict; // @synthesize iconRequestDict=_iconRequestDict;
@property(retain, nonatomic) NSMutableDictionary *iconRetryTime; // @synthesize iconRetryTime=_iconRetryTime;
@property(retain, nonatomic) NSMutableArray *iconRequestWaiting; // @synthesize iconRequestWaiting=_iconRequestWaiting;
@property(retain, nonatomic) NSMutableArray *iconRequestFetcher; // @synthesize iconRequestFetcher=_iconRequestFetcher;
@property(nonatomic) id <MQQShortcutIconFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelAllRequest;
- (id)indexPathToString:(id)arg1;
- (void)retryRequest:(id)arg1;
- (void)removeFetcherRequest:(id)arg1 withURLString:(id)arg2 indexPath:(id)arg3 success:(_Bool)arg4;
- (void)addNewRequestToQueueWithURLString:(id)arg1 md5:(id)arg2 iconPath:(id)arg3 andIndexPath:(id)arg4;
- (void)iconRequestDidFail:(id)arg1;
- (void)iconRequestDidFinish:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)icontRequestDict;
- (void)fetchIconWithItems:(id)arg1;
- (void)fetchIconWithURLItem:(id)arg1 andIndexPath:(id)arg2;
- (void)dealloc;
- (id)init;

@end

