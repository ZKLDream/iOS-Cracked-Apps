//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FBSSOLogger : NSObject
{
    NSMutableArray *_requestedURLs;
    NSMutableArray *_dataForRequests;
}

- (void).cxx_destruct;
- (void)logWithAnalyticsUUID:(id)arg1;
- (void)completeWithCallbackURL:(id)arg1;
- (void)cancelFromNavigationBar;
- (void)notePotentialImplicitCancel;
- (void)dialogRequestDidComplete;
- (void)dialogDidFailWithError:(id)arg1;
- (void)dialogDidLoad;
- (void)willLoadRequest:(id)arg1;
- (void)preflightRequest:(id)arg1;
- (id)init;

@end

