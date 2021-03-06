//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class CTVectorImageView, NSDate, NSLayoutConstraint, NSString, UIButton, UIImageView, UIScrollView;

@interface CTTrainDateSwitchView : UIView <UIScrollViewDelegate>
{
    UIButton *_previousDayButton;
    UIButton *_nextDayButton;
    UIScrollView *_dateScrollView;
    NSDate *_startBookDate;
    unsigned long long _bookDayLength;
    id <CTTrainDateSwitchViewDelegate> _delegate;
    UIButton *_tapEventButton;
    UIView *_bottomLineView;
    UIView *_topLineView;
    NSLayoutConstraint *_topLineViewHeightConstraint;
    NSLayoutConstraint *_bottomLineViewHeightConstraint;
    UIImageView *_calendarIconImgView;
    UIImageView *_arrowIconImgView;
    UIView *_containerScrollView;
    CTVectorImageView *_calendarVectorImgView;
    CTVectorImageView *_arrowVectorImgView;
    NSString *_departDate;
}

+ (id)dateSwitchViewWithStyle:(long long)arg1;
@property(retain, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(nonatomic) __weak CTVectorImageView *arrowVectorImgView; // @synthesize arrowVectorImgView=_arrowVectorImgView;
@property(nonatomic) __weak CTVectorImageView *calendarVectorImgView; // @synthesize calendarVectorImgView=_calendarVectorImgView;
@property(nonatomic) __weak UIView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(nonatomic) __weak UIImageView *arrowIconImgView; // @synthesize arrowIconImgView=_arrowIconImgView;
@property(nonatomic) __weak UIImageView *calendarIconImgView; // @synthesize calendarIconImgView=_calendarIconImgView;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineViewHeightConstraint; // @synthesize bottomLineViewHeightConstraint=_bottomLineViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topLineViewHeightConstraint; // @synthesize topLineViewHeightConstraint=_topLineViewHeightConstraint;
@property(nonatomic) __weak UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) __weak UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak UIButton *tapEventButton; // @synthesize tapEventButton=_tapEventButton;
@property(nonatomic) __weak id <CTTrainDateSwitchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bookDayLength; // @synthesize bookDayLength=_bookDayLength;
@property(retain, nonatomic) NSDate *startBookDate; // @synthesize startBookDate=_startBookDate;
@property(nonatomic) __weak UIScrollView *dateScrollView; // @synthesize dateScrollView=_dateScrollView;
@property(nonatomic) __weak UIButton *nextDayButton; // @synthesize nextDayButton=_nextDayButton;
@property(nonatomic) __weak UIButton *previousDayButton; // @synthesize previousDayButton=_previousDayButton;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)updateDepartDate:(id)arg1;
- (_Bool)checkPreDate:(id)arg1;
- (id)dateAndWeekday:(id)arg1 amount:(long long)arg2;
- (void)setTopBarInfo;
- (_Bool)nextDayButtonEnabled:(id)arg1;
- (void)nextAction:(id)arg1;
- (void)previousAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)setTopLineHidden:(_Bool)arg1;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

