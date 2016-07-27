//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicDetailView.h"

@class ChallengeMusicInfo, ChallengeRankingListView, TuneInfo, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface ScratchMusicDetailView : MusicDetailView
{
    UIImageView *bgImageView;
    UIButton *btnDiff[3];
    UIImageView *levelNumView[4];
    UIImage *levelNumImg[10];
    UIImageView *highscoreBoardView;
    UIImageView *highscoreTextView;
    UIImageView *ratingView;
    UIImageView *comboView;
    UIImageView *highscoreNumView[7];
    UIImage *highscoreNumImg[10];
    UIImage *ratingImg[9];
    UIImage *fullcomboImg;
    UIImage *excellentImg;
    UIImageView *mbarBarView;
    UIImageView *mbarDotView[120];
    UIImage *mbarBarImg[4];
    UIImage *mbarDotImg[4][8];
    char mbarDots[3][60];
    UIImage *rankingNumImg[10];
    UIImageView *rankingNumView[6];
    UIImageView *extendFrame;
    UIImageView *extendDecription;
    UIImageView *holdMark[3];
    int score[3];
    _Bool bFullCombo[3];
    int myRank[3];
    int itemSlot;
    ChallengeMusicInfo *minfo;
    UIButton *rankingBtn;
    ChallengeRankingListView *rankingListView;
    UIButton *jbtStoreBtn;
    long long packID;
    unsigned int currentHoldFlg;
    UIView *consumeCoinView;
    UILabel *consumeTitleLabel;
    UILabel *baseConsumeCoin;
    UILabel *consumeCoin;
    unsigned int _musicID;
    int _difficulty;
    id _aDelegate;
    TuneInfo *_tuneInfo;
}

+ (Class)layerClass;
@property(readonly, nonatomic) TuneInfo *tuneInfo; // @synthesize tuneInfo=_tuneInfo;
@property(readonly, nonatomic) int difficulty; // @synthesize difficulty=_difficulty;
@property(readonly, nonatomic) unsigned int musicID; // @synthesize musicID=_musicID;
@property(nonatomic) __weak id aDelegate; // @synthesize aDelegate=_aDelegate;
- (void).cxx_destruct;
- (void)timerUpdate;
- (void)refreshDetail;
- (void)showDetail;
- (void)tapStoreMove;
- (void)closeRanking;
- (void)tapRanking:(id)arg1;
- (void)pushButtonStartPlay:(id)arg1;
- (void)setDetailInfo:(int)arg1;
- (struct CGPoint)getDifficultyPos:(int)arg1;
- (id)getStartImage;
- (void)dealloc;
- (void)setMusicBarDot:(char *)arg1 mbarRes:(char *)arg2;
- (void)changeDifficulty:(int)arg1;
- (void)setScoreBoard:(int)arg1 fullcombo:(_Bool)arg2;
- (void)selectDiff:(id)arg1;
- (id)soundName:(id)arg1;
- (void)clearInfo;
- (void)infoChange:(int)arg1;
- (void)setInfo:(id)arg1 score:(id)arg2;
- (void)setRankingNumberImage:(int)arg1;
- (void)loadExtendMusicBar:(id)arg1;
- (void)loadContentFromPath:(id)arg1 orData:(id)arg2;
- (void)loadContentFromDictionary:(id)arg1;
- (void)loadImages;
- (id)diffButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
