//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface ONEOrderListReloadButton : UIView
{
    UIButton *_btn;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
- (void).cxx_destruct;
- (void)touchUpInSide;
- (id)initWithFrame:(struct CGRect)arg1;

@end

