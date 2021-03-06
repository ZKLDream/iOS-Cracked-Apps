//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QiXiuBaseVC.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIImagePickerController, UITableView, UIView;

@interface QiXiuUserInfoVC : QiXiuBaseVC <UIActionSheetDelegate, UIImagePickerControllerDelegate, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showBadgeCell;
    UITableView *_tableView;
    UIView *_tableViewFooter;
    UIImagePickerController *_imagePickerController;
    NSArray *_tableTitles;
    NSArray *_cellClassNames;
}

@property(nonatomic) _Bool showBadgeCell; // @synthesize showBadgeCell=_showBadgeCell;
@property(retain, nonatomic) NSArray *cellClassNames; // @synthesize cellClassNames=_cellClassNames;
@property(retain, nonatomic) NSArray *tableTitles; // @synthesize tableTitles=_tableTitles;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(retain, nonatomic) UIView *tableViewFooter; // @synthesize tableViewFooter=_tableViewFooter;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)restoreBar;
- (void)setupBar;
- (id)maxImageWithImage:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)exit:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)openBannerDetailWithURL;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

