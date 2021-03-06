//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DoneDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, PassGuardTextField, UILabel, UITapGestureRecognizer, UIToolbar, UIView;
@protocol BarDelegate;

@interface PassGuardViewController : UIViewController <DoneDelegate, UITextFieldDelegate>
{
    _Bool m_bfirstshow;
    _Bool m_displaystatus;
    _Bool m_resignTextField;
    _Bool m_isDispearWithTouchOutside;
    _Bool m_bshowtoolbar;
    UIView *m_rootview;
    UIToolbar *m_toolbar;
    PassGuardTextField *m_tf;
    UILabel *m_label;
    id <BarDelegate> delegate;
    UITapGestureRecognizer *tap;
}

@property(nonatomic) _Bool m_bshowtoolbar; // @synthesize m_bshowtoolbar;
@property(nonatomic) _Bool m_isDispearWithTouchOutside; // @synthesize m_isDispearWithTouchOutside;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap;
@property(nonatomic) id <BarDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UILabel *m_label; // @synthesize m_label;
@property(retain, nonatomic) PassGuardTextField *m_tf; // @synthesize m_tf;
@property(retain, nonatomic) UIToolbar *m_toolbar; // @synthesize m_toolbar;
@property(retain, nonatomic) UIView *m_rootview; // @synthesize m_rootview;
- (_Bool)isIPhone;
- (void)CustomKeyboardViewSubmit;
- (void)CustomKeyboardViewDismiss;
- (void)DoneFun:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchoutside:(id)arg1;
- (void)dismiss;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)show;
- (_Bool)isShow;
- (void)statusBarFrameOrOrientationChanged:(id)arg1;
- (void)adjustviewframe;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

