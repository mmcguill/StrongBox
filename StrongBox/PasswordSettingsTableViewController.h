//
//  PasswordSettingsTableViewController.h
//  StrongBox
//
//  Created by Mark on 29/05/2017.
//  Copyright © 2017 Mark McGuill. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Record.h"
#import "Model.h"

@interface PasswordSettingsTableViewController : UITableViewController

@property (nonatomic, retain) PasswordHistory *model;
@property (nonatomic, retain) Model *viewModel;

@property (nonatomic, copy) void (^ saveFunction)(PasswordHistory *changed, void (^onDone)(NSError *));

@property (weak, nonatomic) IBOutlet UISwitch *uiSwitchEnabled;
@property (weak, nonatomic) IBOutlet UILabel *uiLabelPreviousPasswords;
@property (weak, nonatomic) IBOutlet UIStepper *uiStepper;
@property (weak, nonatomic) IBOutlet UITableViewCell *uiTableViewCellMaximumEntries;

- (IBAction)onMaxEntriesStepper:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *uiLabelMaximumEntries;
@property (weak, nonatomic) IBOutlet UITableViewCell *uiTableViewCellPreviousPasswords;
- (IBAction)onTogglePasswordHistoryEnabled:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *uiLabelMaximumEntriesStatic;
@end
