//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, ScratchInfo, SessionDownloader, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UITableView;

@interface ChallengeRankingListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *bgView;
    UIImageView *bgImageView;
    UIImageView *titleView;
    UIButton *closeBtn;
    UIImageView *listLineView;
    UITableView *listView;
    UIImage *plateBgImage0;
    UIImage *plateBgImage1;
    UIImage *plateBgPickup;
    UIImage *iconImage[8];
    UIImage *iconNumImage[10];
    UIImageView *tagBeltView;
    UIButton *diffBtn[4];
    UIImage *btnImage[4][2];
    UIImage *areaImage[2];
    UIButton *areaBtn[2];
    UIButton *prevBtn;
    UIButton *nextBtn;
    UIButton *myRankBtn;
    UIButton *topRankBtn;
    UIImageView *musicNameView;
    UILabel *musicNameText;
    NSString *musicDefName;
    int cellHeight;
    int dispRank;
    int selectDifficulty;
    int selectArea;
    NSString *myID;
    UIActivityIndicatorView *downloadIndicator;
    int pickupSlot;
    NSArray *rankingList;
    int musicID;
    NSString *musicName;
    int myRank;
    int myIndex;
    _Bool isNext;
    int selectRankIndex;
    int rankingTotal;
    SessionDownloader *rankingDownloader;
    struct CGRect listRect;
    UILabel *myRankLabel;
    UILabel *currentPageLabel;
    ScratchInfo *targetInfo;
    NSNumber *targetScratchID;
    UIView *rivalCover;
    UIImageView *addMessage;
    UIView *rivalAddView;
    UIImageView *addBgView;
    UIButton *addBtn;
    UIButton *cancelBtn;
    UIButton *endBtn;
    UILabel *rivalID;
    UILabel *rivalName;
    NSString *selectedRivalID;
    id _aDelegate;
}

@property(nonatomic) __weak id aDelegate; // @synthesize aDelegate=_aDelegate;
- (void).cxx_destruct;
- (void)replaceBackBtnImage;
- (void)createRivalAddMessage:(int)arg1;
- (void)selectRivalAdd:(id)arg1;
- (void)selectRivalCancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tapCloseBtn:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)nextRivalList:(id)arg1;
- (void)prevRivalList:(id)arg1;
- (void)tapTopRank:(id)arg1;
- (void)tapMyRank:(id)arg1;
- (void)tapArea:(id)arg1;
- (void)tapDifficulty:(id)arg1;
- (void)tapClose:(id)arg1;
- (void)alertSelect:(id)arg1;
- (void)downloaderError:(id)arg1;
- (void)downloaderFinished:(id)arg1;
- (void)listDownload:(int)arg1 size:(int)arg2;
- (void)setArea:(int)arg1;
- (void)setDifficulty:(int)arg1;
- (void)selectListCell:(id)arg1;
- (void)enableMyRankBtn;
- (void)updateMyRank;
- (id)initWithFrame:(struct CGRect)arg1 mDict:(id)arg2 scratchID:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1 mInfo:(id)arg2 rankType:(int)arg3;
- (void)createView;
- (void)createIndicator;
- (void)buttonEnable:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
