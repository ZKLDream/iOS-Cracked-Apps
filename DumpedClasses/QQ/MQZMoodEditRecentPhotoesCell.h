//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSMutableArray, QZMoodComposeViewController, UIButton, UILabel, UIScrollView;

@interface MQZMoodEditRecentPhotoesCell : UIImageView
{
    NSMutableArray *_assets;
    NSMutableArray *_buttons;
    long long _compressBatchId;
    QZMoodComposeViewController *_ctr;
    UILabel *_label;
    UIScrollView *_scrollView;
    UIImageView *_arrowView;
    UIButton *_closeButton;
}

@property(nonatomic) long long compressBatchId; // @synthesize compressBatchId=_compressBatchId;
- (void).cxx_destruct;

@end

