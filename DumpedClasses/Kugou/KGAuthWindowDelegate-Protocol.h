//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGGoodsEntity, KGMusicAuthInfo;

@protocol KGAuthWindowDelegate <NSObject>
- (void)buyCancel;
- (void)buySuccessWithAuthInfo:(KGMusicAuthInfo *)arg1 andActionType:(int)arg2 andGoodsEntity:(KGGoodsEntity *)arg3;
@end

