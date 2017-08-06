//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "SelectMusicBaseCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSCache, NSMutableArray, NSString, UITableView, UIView;

@interface KQSelectLocalMusicViewController : KGViewController <UITableViewDataSource, UITableViewDelegate, SelectMusicBaseCellDelegate>
{
    NSMutableArray *_arSelectedSongs;
    UITableView *_selectLocalTableView;
    NSMutableArray *_localSongs;
    NSMutableArray *_musicStateArr;
    unsigned long long _pagetype;
    UIView *_noDataBgView;
    id <SelectMusicBaseCellDelegate> _cellDelegate;
    id <KQSearchForFailMatchProtocol> _failMatchDelegate;
    NSCache *_statusCache;
}

@property(retain, nonatomic) NSCache *statusCache; // @synthesize statusCache=_statusCache;
@property(nonatomic) __weak id <KQSearchForFailMatchProtocol> failMatchDelegate; // @synthesize failMatchDelegate=_failMatchDelegate;
@property(nonatomic) __weak id <SelectMusicBaseCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) UIView *noDataBgView; // @synthesize noDataBgView=_noDataBgView;
@property(nonatomic) unsigned long long pagetype; // @synthesize pagetype=_pagetype;
@property(retain, nonatomic) NSMutableArray *musicStateArr; // @synthesize musicStateArr=_musicStateArr;
@property(retain, nonatomic) NSMutableArray *localSongs; // @synthesize localSongs=_localSongs;
@property(retain, nonatomic) UITableView *selectLocalTableView; // @synthesize selectLocalTableView=_selectLocalTableView;
@property(retain, nonatomic) NSMutableArray *arSelectedSongs; // @synthesize arSelectedSongs=_arSelectedSongs;
- (void).cxx_destruct;
- (void)showSearchSongsSheet:(id)arg1 andOriginSongName:(id)arg2;
- (void)SelectMusicListenClicked:(id)arg1;
- (void)sendLocalMatchFaileBiInfo;
- (void)SelectMusicBaseCellClicked:(id)arg1 andToBeSelected:(_Bool)arg2;
- (_Bool)contrastSongInfoHashWithSongInfoArray:(id)arg1 andSongInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned long long)getStatusWithSongInfo:(id)arg1;
- (void)updateSongInfo:(id)arg1 withStatus:(unsigned long long)arg2;
- (void)showNoDataView;
- (void)initBaseData;
- (void)initView;
- (id)initWithPageSoure:(unsigned long long)arg1 andSelectedSongs:(id)arg2 andCellDelegate:(id)arg3 andSearchForFailMatchDelegate:(id)arg4;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
