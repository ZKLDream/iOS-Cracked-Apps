//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol WXWebSocketDelegate <NSObject>
- (void)didCloseWithCode:(long long)arg1 reason:(NSString *)arg2 wasClean:(_Bool)arg3;
- (void)didReceiveMessage:(id)arg1;
- (void)didFailWithError:(NSError *)arg1;
- (void)didOpen;
@end
