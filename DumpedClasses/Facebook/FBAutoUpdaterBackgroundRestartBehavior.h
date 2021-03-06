//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAutoUpdaterAutomaticRestartBehavior-Protocol.h"

@class FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer, NSNotificationCenter, UIApplication;

@interface FBAutoUpdaterBackgroundRestartBehavior : NSObject <FBAutoUpdaterAutomaticRestartBehavior>
{
    UIApplication *_application;
    NSNotificationCenter *_notificationCenter;
    FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_onBackground;
- (void)_beginObservingLifecycleNotifications;
- (void)removeRestartBehaviorListener:(id)arg1;
- (void)addRestartBehaviorListener:(id)arg1;
- (_Bool)autoUpdaterShouldAutomaticallyRestart;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 notificationCenter:(id)arg2;
- (id)init;

@end

