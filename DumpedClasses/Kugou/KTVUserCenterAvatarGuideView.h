//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeLabel, KGThemeLine, UIImageView;

@interface KTVUserCenterAvatarGuideView : UIView
{
    KGThemeLine *_bgView;
    KGThemeLabel *_topText;
    UIImageView *_notHumanIcon;
    KGThemeLabel *_notHumanText;
    UIImageView *_notClearIcon;
    KGThemeLabel *_notClearText;
    UIImageView *_notDressyIcon;
    KGThemeLabel *_notDressyText;
    UIImageView *_wrongIcon;
    UIImageView *_adviceIcon;
    KGThemeLabel *_adviceText;
    UIImageView *_correctIcon;
}

@property(retain, nonatomic) UIImageView *correctIcon; // @synthesize correctIcon=_correctIcon;
@property(retain, nonatomic) KGThemeLabel *adviceText; // @synthesize adviceText=_adviceText;
@property(retain, nonatomic) UIImageView *adviceIcon; // @synthesize adviceIcon=_adviceIcon;
@property(retain, nonatomic) UIImageView *wrongIcon; // @synthesize wrongIcon=_wrongIcon;
@property(retain, nonatomic) KGThemeLabel *notDressyText; // @synthesize notDressyText=_notDressyText;
@property(retain, nonatomic) UIImageView *notDressyIcon; // @synthesize notDressyIcon=_notDressyIcon;
@property(retain, nonatomic) KGThemeLabel *notClearText; // @synthesize notClearText=_notClearText;
@property(retain, nonatomic) UIImageView *notClearIcon; // @synthesize notClearIcon=_notClearIcon;
@property(retain, nonatomic) KGThemeLabel *notHumanText; // @synthesize notHumanText=_notHumanText;
@property(retain, nonatomic) UIImageView *notHumanIcon; // @synthesize notHumanIcon=_notHumanIcon;
@property(retain, nonatomic) KGThemeLabel *topText; // @synthesize topText=_topText;
@property(retain, nonatomic) KGThemeLine *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

