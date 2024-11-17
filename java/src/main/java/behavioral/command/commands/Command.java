package behavioral.command.commands;

import behavioral.command.Application;
import behavioral.command.Editor;

/**
 * Base command class defines the common interface for all
 * concrete commands.
 */
public abstract class Command {
    protected Editor editor;
    private String backup;

    public Command(Editor editor) {
        this.editor = editor;
    }

    /**
     * make a backup of the editor's state
     */
    void saveBackup() {
        this.backup = editor.getText();
    }

    /**
     * Restore the editor's state
     */
    void restoreBackup() {
        editor.setText() = this.backup;
    }

    /**
     * The execute method is declared abstract to all
     * concrete methods to provide their own implementation
     * The method must return true or false depending on whether
     * the command changes the editor's state
     */
    public abstract void execute();
}
