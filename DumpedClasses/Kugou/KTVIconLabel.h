//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class KGThemeLabel, NSString, UIImage, UIImageView;

@interface KTVIconLabel : UIControl
{
    long long _iconPosition;
    long long _contentPosition;
    double _gapWidth;
    double _gapHeight;
    UIImageView *_iconView;
    KGThemeLabel *_label;
    UIImage *_iconImage;
    NSString *_text;
}

@property(nonatomic) __weak NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak KGThemeLabel *label; // @synthesize label=_label;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double gapHeight; // @synthesize gapHeight=_gapHeight;
@property(nonatomic) double gapWidth; // @synthesize gapWidth=_gapWidth;
@property(nonatomic) long long contentPosition; // @synthesize contentPosition=_contentPosition;
@property(nonatomic) long long iconPosition; // @synthesize iconPosition=_iconPosition;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 icon:(id)arg2 text:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

