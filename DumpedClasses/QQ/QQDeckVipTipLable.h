//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface QQDeckVipTipLable : UIView
{
    int vipButtonType;
    UILabel *titleLable;
    UIButton *button;
}

@property(nonatomic) int vipButtonType; // @synthesize vipButtonType;
- (void)setButtonIcon:(id)arg1 reSize:(struct CGRect)arg2 adjustIconInset:(struct UIEdgeInsets)arg3;
- (void)clearButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)addButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 img:(id)arg2 title:(id)arg3 vipButtonType:(int)arg4;
- (void)dealloc;

@end
