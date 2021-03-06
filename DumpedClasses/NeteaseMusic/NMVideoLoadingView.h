//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImage, UIImageView;

@interface NMVideoLoadingView : UIView
{
    UIView *_bgView;
    UIImageView *_logoView;
    UIActivityIndicatorView *_loadingIndicator;
    UIImage *_loadingImage;
    UIImage *_loadingImaggeFullScreen;
    _Bool _isFullScreen;
    _Bool _isWorking;
    _Bool _hideBackgroundView;
}

@property(nonatomic) _Bool hideBackgroundView; // @synthesize hideBackgroundView=_hideBackgroundView;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
- (void).cxx_destruct;
- (void)startLoadingOrBuffering:(_Bool)arg1;
- (void)stopLoading;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

