//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NIAttributedLabel, NSTextCheckingResult, UIActionSheet;

@protocol NIAttributedLabelDelegate <NSObject>

@optional
- (_Bool)attributedLabel:(NIAttributedLabel *)arg1 shouldPresentActionSheet:(UIActionSheet *)arg2 withTextCheckingResult:(NSTextCheckingResult *)arg3 atPoint:(struct CGPoint)arg4;
- (void)attributedLabelTouchNothing:(NIAttributedLabel *)arg1;
- (void)attributedLabel:(NIAttributedLabel *)arg1 didSelectTextCheckingResult:(NSTextCheckingResult *)arg2 atPoint:(struct CGPoint)arg3;
@end

