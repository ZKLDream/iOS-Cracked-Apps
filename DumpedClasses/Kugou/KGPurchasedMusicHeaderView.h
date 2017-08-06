//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine, UIImageView;

@interface KGPurchasedMusicHeaderView : UIView
{
    id <KGPurchasedMusicHeaderViewDelegate> _delegate;
    UIImageView *_backImageView;
    unsigned long long _type;
    KGThemeLabel *_tipLabel;
    KGThemeButton *_btn;
    KGThemeLine *_bottomLine;
}

@property(retain, nonatomic) KGThemeLine *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) KGThemeButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) KGThemeLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) __weak id <KGPurchasedMusicHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)btnClicked:(id)arg1;
- (void)initUIForPurchasedMusic;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;

@end
