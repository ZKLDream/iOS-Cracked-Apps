//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBMenuItemHandler-Protocol.h"

@class FBGroupCreationConfig, FBUserSession, NSString;

@interface FBGroupsMenuItemHandler : NSObject <FBMenuItemHandler>
{
    FBUserSession *_session;
    FBGroupCreationConfig *_creationConfig;
}

+ (id)dashboardViewControllerForSession:(id)arg1 discoverNavigatorOptions:(id)arg2;
+ (id)supportedBookmarkKeysForSession:(id)arg1;
- (void).cxx_destruct;
- (_Bool)handleMenuItem:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3;
- (id)viewControllerForMenuItem:(id)arg1;
- (_Bool)shouldClearBookmarkCountOnTap;
- (id)initWithSession:(id)arg1 creationConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

