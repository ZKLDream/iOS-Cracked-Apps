//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedLabel, SSThemedView;

@interface WDActionSheetTableCell : SSThemedTableViewCell
{
    id <WDActionSheetProtocol> _model;
    SSThemedLabel *_contentLabel;
    SSThemedView *_seperatorView;
}

@property(retain, nonatomic) SSThemedView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) SSThemedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) id <WDActionSheetProtocol> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)refreshWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

