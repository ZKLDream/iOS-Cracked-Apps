//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "QYPaoPaoClouldControlDelegate-Protocol.h"

@class NSIndexPath, Playershare;

@protocol QYPaoPaoFeedCardInputViewDelegate <NSObject, QYPaoPaoClouldControlDelegate>
- (void)commentInputViewFrameChanged:(struct CGRect)arg1;
- (void)EnterPaoPaoCircleClick:(NSIndexPath *)arg1 isFromDetail:(_Bool)arg2;
- (void)LikeBtnClick:(NSIndexPath *)arg1 isFromDetail:(_Bool)arg2;
- (void)CommentFeed:(NSIndexPath *)arg1 isFromDetailView:(_Bool)arg2;

@optional
- (Playershare *)getPlayerShare;
- (int)getFeedPannelType;
@end

