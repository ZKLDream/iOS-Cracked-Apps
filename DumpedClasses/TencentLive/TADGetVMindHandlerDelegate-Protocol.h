//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol TADGetVMindHandlerDelegate <NSObject>
- (void)failedToLoadVideo;
- (void)didLoadVideosWithUrlMap:(NSDictionary *)arg1 md5Map:(NSDictionary *)arg2 oidMap:(NSDictionary *)arg3;
@end
