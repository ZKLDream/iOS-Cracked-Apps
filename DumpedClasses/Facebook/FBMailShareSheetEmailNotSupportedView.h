//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol FBMailShareSheetEmailNotSupportedViewDelegate;

@interface FBMailShareSheetEmailNotSupportedView : UIView
{
    id <FBMailShareSheetEmailNotSupportedViewDelegate> _delegate;
    UIButton *_closeButton;
    UILabel *_mailNotSupportedLabel;
}

- (void).cxx_destruct;
- (void)_didTouchCloseButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

