//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "CHTCollectionViewDelegateWaterfallLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "XYPHNoteCellDelegate.h"
#import "XYPHSearchFilterViewControllerDelegate.h"
#import "XYPHSearchResultAnimationNavigationBarDelegate.h"
#import "XYPHSearchResultRecommendFilterCellDelegate.h"
#import "XYSortToolBarDelegate.h"

@class CHTCollectionViewWaterfallLayout, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UIImageView, XYPHNoteGridStyleHomeCellAdapter, XYPHNoteTagLocation, XYPHSearchFilterNotesViewController, XYPHSearchResultAnimationNavigationBar, XYPHSearchResultRecommendCellAdapter, XYPHSearchResultSortToolBar, XYPHSearchResultSortToolBarHeaderView, XYPHStoreGoods;

@interface XYPHSearchResultNotesViewController : XYPHBaseViewController <XYSortToolBarDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CHTCollectionViewDelegateWaterfallLayout, UIScrollViewDelegate, XYPHNoteCellDelegate, XYPHSearchResultRecommendFilterCellDelegate, XYPHSearchResultAnimationNavigationBarDelegate, XYPHSearchFilterViewControllerDelegate>
{
    _Bool _noMoreData;
    _Bool _isLoadingData;
    _Bool _keepSortBarAtTopPosition;
    NSString *_keyword;
    NSString *_source;
    NSString *_notesSortId;
    UICollectionView *_collectionView;
    NSMutableArray *_notesArray;
    id <XYPHSearchResultScrollToTopDelegate> _delegate;
    CDUnknownBlockType _updateSearchResult;
    XYPHSearchResultSortToolBar *_sortToolBar;
    XYPHSearchResultSortToolBarHeaderView *_sortToolBarHeaderView;
    XYPHSearchFilterNotesViewController *_filterViewController;
    UIButton *_backToTopButton;
    UIButton *_dismissButton;
    XYPHSearchResultAnimationNavigationBar *_animationNavigationBar;
    CHTCollectionViewWaterfallLayout *_waterfallLayout;
    XYPHNoteGridStyleHomeCellAdapter *_noteCellAdapter;
    XYPHSearchResultRecommendCellAdapter *_recommendCellAdapter;
    UIImageView *_placeholderView;
    NSArray *_notesSortIdArray;
    NSArray *_topicsArray;
    NSArray *_recommendFilterArray;
    NSMutableArray *_recommendFilterPositionsArray;
    XYPHStoreGoods *_recommendGoods;
    XYPHNoteTagLocation *_recommendPoi;
    NSMutableDictionary *_filterTagsDictionary;
    NSDictionary *_selectedFilterDictionary;
    long long _totalCount;
    long long _insertedFilterCount;
    long long _pageNow;
}

@property(nonatomic) _Bool keepSortBarAtTopPosition; // @synthesize keepSortBarAtTopPosition=_keepSortBarAtTopPosition;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(nonatomic) long long pageNow; // @synthesize pageNow=_pageNow;
@property(nonatomic) long long insertedFilterCount; // @synthesize insertedFilterCount=_insertedFilterCount;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSDictionary *selectedFilterDictionary; // @synthesize selectedFilterDictionary=_selectedFilterDictionary;
@property(retain, nonatomic) NSMutableDictionary *filterTagsDictionary; // @synthesize filterTagsDictionary=_filterTagsDictionary;
@property(retain, nonatomic) XYPHNoteTagLocation *recommendPoi; // @synthesize recommendPoi=_recommendPoi;
@property(retain, nonatomic) XYPHStoreGoods *recommendGoods; // @synthesize recommendGoods=_recommendGoods;
@property(retain, nonatomic) NSMutableArray *recommendFilterPositionsArray; // @synthesize recommendFilterPositionsArray=_recommendFilterPositionsArray;
@property(retain, nonatomic) NSArray *recommendFilterArray; // @synthesize recommendFilterArray=_recommendFilterArray;
@property(retain, nonatomic) NSArray *topicsArray; // @synthesize topicsArray=_topicsArray;
@property(retain, nonatomic) NSArray *notesSortIdArray; // @synthesize notesSortIdArray=_notesSortIdArray;
@property(retain, nonatomic) UIImageView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) XYPHSearchResultRecommendCellAdapter *recommendCellAdapter; // @synthesize recommendCellAdapter=_recommendCellAdapter;
@property(retain, nonatomic) XYPHNoteGridStyleHomeCellAdapter *noteCellAdapter; // @synthesize noteCellAdapter=_noteCellAdapter;
@property(retain, nonatomic) CHTCollectionViewWaterfallLayout *waterfallLayout; // @synthesize waterfallLayout=_waterfallLayout;
@property(retain, nonatomic) XYPHSearchResultAnimationNavigationBar *animationNavigationBar; // @synthesize animationNavigationBar=_animationNavigationBar;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIButton *backToTopButton; // @synthesize backToTopButton=_backToTopButton;
@property(retain, nonatomic) XYPHSearchFilterNotesViewController *filterViewController; // @synthesize filterViewController=_filterViewController;
@property(retain, nonatomic) XYPHSearchResultSortToolBarHeaderView *sortToolBarHeaderView; // @synthesize sortToolBarHeaderView=_sortToolBarHeaderView;
@property(retain, nonatomic) XYPHSearchResultSortToolBar *sortToolBar; // @synthesize sortToolBar=_sortToolBar;
@property(copy, nonatomic) CDUnknownBlockType updateSearchResult; // @synthesize updateSearchResult=_updateSearchResult;
@property(nonatomic) __weak id <XYPHSearchResultScrollToTopDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *notesArray; // @synthesize notesArray=_notesArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *notesSortId; // @synthesize notesSortId=_notesSortId;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (double)getTopOfNotesList;
- (void)dismissButtonEvent:(id)arg1;
- (void)hiddenFilterViewController:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startNavigationAnimation:(double)arg1;
- (void)insertRecommendFilter:(_Bool)arg1;
- (void)backToTopButtonEvent:(id)arg1;
- (void)hiddenPlaceholder:(_Bool)arg1;
- (void)initPlaceHolder;
- (void)initializeHeaderView;
- (void)setupHeaderView;
- (void)searchFilterViewController:(id)arg1 doneButtonClickedSelectedFilterTag:(id)arg2;
- (void)searchFilterViewController:(id)arg1 didTotalValueChange:(long long)arg2;
- (void)searchFilterViewController:(id)arg1 didSelectedFilterTag:(id)arg2;
- (void)searchResultAnimationNavigationBar:(id)arg1 didTapped:(id)arg2;
- (void)searchResultRecommendFilterCell:(id)arg1 didSelectFilterAtIndex:(long long)arg2;
- (void)noteCellUserButtonClicked:(id)arg1;
- (void)noteCellLikesButtonClicked:(id)arg1;
- (void)sortToolBar:(id)arg1 didSelectIndex:(long long)arg2;
- (void)sortToolBar:(id)arg1 isHiddenSortUnderBar:(_Bool)arg2;
- (_Bool)hiddenHeaderView:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 layout:(id)arg2 columnCountForSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)requestNotesArray;
- (void)requstTopicsAndRecommender;
- (void)requsetRecommendFilter;
- (void)makeNewRequest;
- (void)didReceiveMemoryWarning;
- (void)pullToLoadMore;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
