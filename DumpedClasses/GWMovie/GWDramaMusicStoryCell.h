//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWDramaDetailBaseCell.h"

@class GWMusicStoryCardView;
@protocol GWMusicStoryCardViewDelegate;

@interface GWDramaMusicStoryCell : GWDramaDetailBaseCell
{
    id <GWMusicStoryCardViewDelegate> _delegate;
    GWMusicStoryCardView *_musicStoryCardView;
}

+ (double)rowHeightWithCellObject:(id)arg1;
@property(retain, nonatomic) GWMusicStoryCardView *musicStoryCardView; // @synthesize musicStoryCardView=_musicStoryCardView;
@property(nonatomic) __weak id <GWMusicStoryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)showCellWithObject:(id)arg1;

@end

