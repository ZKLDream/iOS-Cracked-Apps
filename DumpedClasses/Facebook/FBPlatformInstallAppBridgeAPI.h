//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBPlatformBridgeAPI.h"

#import "FBStoreProductViewControllerDelegate-Protocol.h"

@class NSString;

@interface FBPlatformInstallAppBridgeAPI : FBPlatformBridgeAPI <FBStoreProductViewControllerDelegate>
{
    FBPlatformInstallAppBridgeAPI *_executingAPI;
}

+ (id)javaScriptFunctionName;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)invokeFromViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

