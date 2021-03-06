//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIImage, UILabel, UIPlaceHolderTextView, UITextField;

@interface NMFeedbackHeadView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate>
{
    id _delegate;
    UIPlaceHolderTextView *_textView;
    UILabel *_inputTipLabel;
    UIView *_bgView;
    UITextField *_contactTextField;
    UIView *_feedbackCategotyBgView;
    UILabel *_feedbackGuide;
    NSMutableArray *_feedbackBtns;
    UIImage *_feedBackBtnNormalImg;
    NSString *_feedBackBtnNormalImgName;
    NSArray *_feedbackCategoryTitles;
    long long _feedbackCategoty;
    NSString *_feedbackCategotyStr;
}

+ (double)topOffsetFix;
+ (double)height;
@property(readonly, nonatomic) NSString *feedbackCategotyStr; // @synthesize feedbackCategotyStr=_feedbackCategotyStr;
@property(nonatomic) long long feedbackCategoty; // @synthesize feedbackCategoty=_feedbackCategoty;
@property(readonly, nonatomic) UITextField *contactTextField; // @synthesize contactTextField=_contactTextField;
@property(readonly, nonatomic) UILabel *inputTipLabel; // @synthesize inputTipLabel=_inputTipLabel;
@property(readonly, nonatomic) UIPlaceHolderTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <NMFeedBackHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectRadioButton:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)handleSkinChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

