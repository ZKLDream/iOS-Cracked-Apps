//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class OMGTabItem, UILabel;

@interface OMGTabItemButton : UIButton
{
    UILabel *_badgeLabel;
    OMGTabItem *_item;
}

+ (id)buttonWithItem:(id)arg1;
@property(retain, nonatomic) OMGTabItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
- (void).cxx_destruct;
- (void)updateWithItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithItem:(id)arg1;

@end

