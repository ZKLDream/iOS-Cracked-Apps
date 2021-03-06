//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, QLFanTuanUserInfoItem, QLRichLabel, QLSImageView, UIImageView, UILabel;

@interface QLFanTuanUserInfoView : UIControl
{
    QLFanTuanUserInfoItem *correspondItem;
    NSString *nickName;
    NSString *timeProptStr;
    struct CGSize adaptiveContentSize;
    QLSImageView *_userIconView;
    QLRichLabel *_nicknameRichLabel;
    UILabel *_nicknameRightAccessoryLable;
    UIImageView *_floorHostTag;
    QLSImageView *_contentLevelTag;
    UILabel *_nicknameBelowAccessoryStrLabel;
}

+ (struct CGSize)viewSizeWithUserItem:(id)arg1;
@property(retain, nonatomic) UILabel *nicknameBelowAccessoryStrLabel; // @synthesize nicknameBelowAccessoryStrLabel=_nicknameBelowAccessoryStrLabel;
@property(retain, nonatomic) QLSImageView *contentLevelTag; // @synthesize contentLevelTag=_contentLevelTag;
@property(retain, nonatomic) UIImageView *floorHostTag; // @synthesize floorHostTag=_floorHostTag;
@property(retain, nonatomic) UILabel *nicknameRightAccessoryLable; // @synthesize nicknameRightAccessoryLable=_nicknameRightAccessoryLable;
@property(retain, nonatomic) QLRichLabel *nicknameRichLabel; // @synthesize nicknameRichLabel=_nicknameRichLabel;
@property(retain, nonatomic) QLSImageView *userIconView; // @synthesize userIconView=_userIconView;
- (void).cxx_destruct;
- (void)didTapUserIcon;
- (void)discardRightAccessoryLabel;
- (void)discardBelowAccessoryLabel;
- (void)setAccessoryStrRightNickname:(id)arg1;
- (void)setAccessoryStrBelowNickname:(id)arg1;
- (struct CGSize)adaptiveSize;
- (void)layoutSubviews;
- (void)setUserInfoItem:(id)arg1 layoutNow:(_Bool)arg2;
- (void)setUserInfoItem:(id)arg1 uInfo:(id)arg2;
- (void)setUserInfoItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

