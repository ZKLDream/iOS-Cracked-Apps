//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KFUserAvatar, NSString, UIButton, UIImageView, UILabel;

@interface KTVCompetitionShareTipView : UIView
{
    _Bool _isShow;
    NSString *_headImg;
    UIView *_contentView;
    UIImageView *_titleBgView;
    UIImageView *_titleContentView;
    UIImageView *_lineBgView;
    UIButton *_closeButton;
    UILabel *_lineLabel;
    UILabel *_despLabel;
    UILabel *_bottomLabel;
    UILabel *_bottomOtherLabel;
    long long _shareType;
    KFUserAvatar *_userImageView1;
    KFUserAvatar *_userImageView2;
    KFUserAvatar *_userImageView3;
    NSString *_canvassUrl;
}

@property(retain, nonatomic) NSString *canvassUrl; // @synthesize canvassUrl=_canvassUrl;
@property(retain, nonatomic) KFUserAvatar *userImageView3; // @synthesize userImageView3=_userImageView3;
@property(retain, nonatomic) KFUserAvatar *userImageView2; // @synthesize userImageView2=_userImageView2;
@property(retain, nonatomic) KFUserAvatar *userImageView1; // @synthesize userImageView1=_userImageView1;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) UILabel *bottomOtherLabel; // @synthesize bottomOtherLabel=_bottomOtherLabel;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *despLabel; // @synthesize despLabel=_despLabel;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *lineBgView; // @synthesize lineBgView=_lineBgView;
@property(retain, nonatomic) UIImageView *titleContentView; // @synthesize titleContentView=_titleContentView;
@property(retain, nonatomic) UIImageView *titleBgView; // @synthesize titleBgView=_titleBgView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
- (void).cxx_destruct;
- (void)callComplete:(id)arg1;
- (void)shareButtonClick:(id)arg1;
- (void)dismiss;
- (void)dismissAgent;
- (void)show;
- (void)updateWithUserArray:(id)arg1;
- (void)setupContentView;
- (id)init;

@end

